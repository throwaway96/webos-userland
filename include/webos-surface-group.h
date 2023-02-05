/* Generated by wayland-scanner 1.11.0 */

#ifndef WEBOS_SURFACE_GROUP_CLIENT_PROTOCOL_H
#define WEBOS_SURFACE_GROUP_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_webos_surface_group The webos_surface_group protocol
 * @section page_ifaces_webos_surface_group Interfaces
 * - @subpage page_iface_wl_webos_surface_group_compositor - a way to group multi client surfaces together
 * - @subpage page_iface_wl_webos_surface_group - 
 * - @subpage page_iface_wl_webos_surface_group_layer - the handle for the group owner to manipulate the layer
 * @section page_copyright_webos_surface_group Copyright
 * <pre>
 *
 * Copyright (c) 2014-2020 LG Electronics, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 * </pre>
 */
struct wl_surface;
struct wl_webos_surface_group;
struct wl_webos_surface_group_compositor;
struct wl_webos_surface_group_layer;

/**
 * @page page_iface_wl_webos_surface_group_compositor wl_webos_surface_group_compositor
 * @section page_iface_wl_webos_surface_group_compositor_desc Description
 *
 * A surface group is a mechanism to group surfaces together that are
 * not part of the same client, hence transiency, nor subsurfaces will
 * fit the bill. However the compositor will treat surfaces belonging
 * to a group very similarly as to surfaces that are transient.
 *
 * The group will be controlled by the process that creates it. The group
 * will have a root surface and the grouped surfaces will be added as
 * layers on top or below it. The creator of the group will designate a z order
 * and a name for each layer. Other processes wanting to add their
 * surface into the group need to know the both the name of the group and
 * the name of the layer.
 *
 * A group can allow anonymous surfaces to be attached to them as well.
 *
 * Practical suggestion, the name of the group should match the appId of
 * parent surface.
 * @section page_iface_wl_webos_surface_group_compositor_api API
 * See @ref iface_wl_webos_surface_group_compositor.
 */
/**
 * @defgroup iface_wl_webos_surface_group_compositor The wl_webos_surface_group_compositor interface
 *
 * A surface group is a mechanism to group surfaces together that are
 * not part of the same client, hence transiency, nor subsurfaces will
 * fit the bill. However the compositor will treat surfaces belonging
 * to a group very similarly as to surfaces that are transient.
 *
 * The group will be controlled by the process that creates it. The group
 * will have a root surface and the grouped surfaces will be added as
 * layers on top or below it. The creator of the group will designate a z order
 * and a name for each layer. Other processes wanting to add their
 * surface into the group need to know the both the name of the group and
 * the name of the layer.
 *
 * A group can allow anonymous surfaces to be attached to them as well.
 *
 * Practical suggestion, the name of the group should match the appId of
 * parent surface.
 */
extern const struct wl_interface wl_webos_surface_group_compositor_interface;
/**
 * @page page_iface_wl_webos_surface_group wl_webos_surface_group
 * @section page_iface_wl_webos_surface_group_api API
 * See @ref iface_wl_webos_surface_group.
 */
/**
 * @defgroup iface_wl_webos_surface_group The wl_webos_surface_group interface
 */
extern const struct wl_interface wl_webos_surface_group_interface;
/**
 * @page page_iface_wl_webos_surface_group_layer wl_webos_surface_group_layer
 * @section page_iface_wl_webos_surface_group_layer_desc Description
 *
 * The handle can be used to change the z order of a particular layer
 * @section page_iface_wl_webos_surface_group_layer_api API
 * See @ref iface_wl_webos_surface_group_layer.
 */
/**
 * @defgroup iface_wl_webos_surface_group_layer The wl_webos_surface_group_layer interface
 *
 * The handle can be used to change the z order of a particular layer
 */
extern const struct wl_interface wl_webos_surface_group_layer_interface;

#define WL_WEBOS_SURFACE_GROUP_COMPOSITOR_CREATE_SURFACE_GROUP	0
#define WL_WEBOS_SURFACE_GROUP_COMPOSITOR_GET_SURFACE_GROUP	1

/**
 * @ingroup iface_wl_webos_surface_group_compositor
 */
#define WL_WEBOS_SURFACE_GROUP_COMPOSITOR_CREATE_SURFACE_GROUP_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group_compositor
 */
#define WL_WEBOS_SURFACE_GROUP_COMPOSITOR_GET_SURFACE_GROUP_SINCE_VERSION	1

/** @ingroup iface_wl_webos_surface_group_compositor */
static inline void
wl_webos_surface_group_compositor_set_user_data(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) wl_webos_surface_group_compositor, user_data);
}

/** @ingroup iface_wl_webos_surface_group_compositor */
static inline void *
wl_webos_surface_group_compositor_get_user_data(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor)
{
	return wl_proxy_get_user_data((struct wl_proxy *) wl_webos_surface_group_compositor);
}

static inline uint32_t
wl_webos_surface_group_compositor_get_version(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor)
{
	return wl_proxy_get_version((struct wl_proxy *) wl_webos_surface_group_compositor);
}

/** @ingroup iface_wl_webos_surface_group_compositor */
static inline void
wl_webos_surface_group_compositor_destroy(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor)
{
	wl_proxy_destroy((struct wl_proxy *) wl_webos_surface_group_compositor);
}

/**
 * @ingroup iface_wl_webos_surface_group_compositor
 *
 * The group will be identified by the 'name' parameter. If a group already
 * exists with the given name an error will be reported to the client.
 */
static inline struct wl_webos_surface_group *
wl_webos_surface_group_compositor_create_surface_group(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor, struct wl_surface *parent, const char *name)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) wl_webos_surface_group_compositor,
			 WL_WEBOS_SURFACE_GROUP_COMPOSITOR_CREATE_SURFACE_GROUP, &wl_webos_surface_group_interface, NULL, parent, name);

	return (struct wl_webos_surface_group *) id;
}

/**
 * @ingroup iface_wl_webos_surface_group_compositor
 *
 * A handle to an existing group.
 */
static inline struct wl_webos_surface_group *
wl_webos_surface_group_compositor_get_surface_group(struct wl_webos_surface_group_compositor *wl_webos_surface_group_compositor, const char *name)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) wl_webos_surface_group_compositor,
			 WL_WEBOS_SURFACE_GROUP_COMPOSITOR_GET_SURFACE_GROUP, &wl_webos_surface_group_interface, NULL, name);

	return (struct wl_webos_surface_group *) id;
}

#ifndef WL_WEBOS_SURFACE_GROUP_Z_HINT_ENUM
#define WL_WEBOS_SURFACE_GROUP_Z_HINT_ENUM
/**
 * @ingroup iface_wl_webos_surface_group
 * hint for the z position of the anonymous surfaces
 *
 * The position of anonymous layer is always relative to the root element
 * and the named layers in this group.
 *
 * If there are multiple entries with the same index designator they will
 * get positioned in the order of which they get attached.
 */
enum wl_webos_surface_group_z_hint {
	/**
	 * below the root surface and the lowest named layer
	 */
	WL_WEBOS_SURFACE_GROUP_Z_HINT_BELOW = 0,
	/**
	 * above the root surface and above the highest named layer
	 */
	WL_WEBOS_SURFACE_GROUP_Z_HINT_ABOVE = 1,
	/**
	 * above all of the anonymous surfaces
	 */
	WL_WEBOS_SURFACE_GROUP_Z_HINT_TOP = 2,
};
#endif /* WL_WEBOS_SURFACE_GROUP_Z_HINT_ENUM */

/**
 * @ingroup iface_wl_webos_surface_group
 * @struct wl_webos_surface_group_listener
 */
struct wl_webos_surface_group_listener {
	/**
	 * sent to clients attached to this group
	 *
	 * If the owner crashes or normally destroys this group the
	 * attached client will receive this notification.
	 *
	 * Since compositor does not know what to do with client surface
	 * still attached to this group it will not show them. A well
	 * behaving client will 'detach' from this group and release its
	 * assosicated resource
	 */
	void (*owner_destroyed)(void *data,
				struct wl_webos_surface_group *wl_webos_surface_group);
};

/**
 * @ingroup wl_webos_surface_group_iface
 */
static inline int
wl_webos_surface_group_add_listener(struct wl_webos_surface_group *wl_webos_surface_group,
				    const struct wl_webos_surface_group_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) wl_webos_surface_group,
				     (void (**)(void)) listener, data);
}

#define WL_WEBOS_SURFACE_GROUP_CREATE_LAYER	0
#define WL_WEBOS_SURFACE_GROUP_ATTACH	1
#define WL_WEBOS_SURFACE_GROUP_ATTACH_ANONYMOUS	2
#define WL_WEBOS_SURFACE_GROUP_ALLOW_ANONYMOUS_LAYERS	3
#define WL_WEBOS_SURFACE_GROUP_DETACH	4
#define WL_WEBOS_SURFACE_GROUP_DESTROY	5
#define WL_WEBOS_SURFACE_GROUP_FOCUS_OWNER	6
#define WL_WEBOS_SURFACE_GROUP_FOCUS_LAYER	7
#define WL_WEBOS_SURFACE_GROUP_COMMIT_KEY_INDEX	8

/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_CREATE_LAYER_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_ATTACH_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_ATTACH_ANONYMOUS_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_ALLOW_ANONYMOUS_LAYERS_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_DETACH_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_DESTROY_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_FOCUS_OWNER_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_FOCUS_LAYER_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group
 */
#define WL_WEBOS_SURFACE_GROUP_COMMIT_KEY_INDEX_SINCE_VERSION	1

/** @ingroup iface_wl_webos_surface_group */
static inline void
wl_webos_surface_group_set_user_data(struct wl_webos_surface_group *wl_webos_surface_group, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) wl_webos_surface_group, user_data);
}

/** @ingroup iface_wl_webos_surface_group */
static inline void *
wl_webos_surface_group_get_user_data(struct wl_webos_surface_group *wl_webos_surface_group)
{
	return wl_proxy_get_user_data((struct wl_proxy *) wl_webos_surface_group);
}

static inline uint32_t
wl_webos_surface_group_get_version(struct wl_webos_surface_group *wl_webos_surface_group)
{
	return wl_proxy_get_version((struct wl_proxy *) wl_webos_surface_group);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * The layer will be identified by the 'name' parameter. The compositor
 * will place the layer in the given z-index relative to the root layer.
 * If negative z-indecies are provided they will be placed underneath the
 * root surface accordingly
 *
 * The creator will get a handle 'wl_webos_surface_group_layer' to the
 * newly created group. The handle can be used to manipulate the layer.
 *
 * If a layer group already exists with the given parameters an error
 * will be reported to the client.
 */
static inline struct wl_webos_surface_group_layer *
wl_webos_surface_group_create_layer(struct wl_webos_surface_group *wl_webos_surface_group, const char *name, int32_t z_index)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_CREATE_LAYER, &wl_webos_surface_group_layer_interface, NULL, name, z_index);

	return (struct wl_webos_surface_group_layer *) id;
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Processes that want to attach a surface to an existing group and layer
 * will call this function.
 *
 * An error will be reported if either the group, the layer or the layer
 * already has a surface attached to it.
 */
static inline void
wl_webos_surface_group_attach(struct wl_webos_surface_group *wl_webos_surface_group, struct wl_surface *surface, const char *layer_name)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_ATTACH, surface, layer_name);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Clients that have a "multi-purpose" surface that might apply to many use
 * cases can try to attach their surface to a named group. The group controls
 * if that is allowed or not.
 *
 * An error will be reported if the group is not available or it does not
 * allow anonymous surfaces
 */
static inline void
wl_webos_surface_group_attach_anonymous(struct wl_webos_surface_group *wl_webos_surface_group, struct wl_surface *surface, uint32_t z_hint)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_ATTACH_ANONYMOUS, surface, z_hint);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Anonymous layers are layers that do not belong to any named layer.
 * They do not enjoy the same benefits as named layers. Their actucal
 * z-index might change if there are named layers or a z index of a
 * named layer is updated.
 */
static inline void
wl_webos_surface_group_allow_anonymous_layers(struct wl_webos_surface_group *wl_webos_surface_group, uint32_t allow)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_ALLOW_ANONYMOUS_LAYERS, allow);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * When a client detaches from a group the compositor will treat is as any other surface.
 * In practice this means that if the client does not want the surface to appear "dangling"
 * or visible in recents the client should hide/destroy the surface, then detach it from
 * the group to avoid any unwanted behavior.
 */
static inline void
wl_webos_surface_group_detach(struct wl_webos_surface_group *wl_webos_surface_group, struct wl_surface *surface)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_DETACH, surface);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Destroys the surface group object.
 */
static inline void
wl_webos_surface_group_destroy(struct wl_webos_surface_group *wl_webos_surface_group)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) wl_webos_surface_group);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Using "focus_owner" a surface-group-client or a surface-group-owner can transfer
 * keybord-focus to surface-group-owner.
 */
static inline void
wl_webos_surface_group_focus_owner(struct wl_webos_surface_group *wl_webos_surface_group)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_FOCUS_OWNER);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Using "focus_layer" a surface-group-owner or a surface-group-client can transfer
 * keybord-focus to specific surface-group-client attached to surface-group-layer "layer".
 */
static inline void
wl_webos_surface_group_focus_layer(struct wl_webos_surface_group *wl_webos_surface_group, const char *layer)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_FOCUS_LAYER, layer);
}

/**
 * @ingroup iface_wl_webos_surface_group
 *
 * Using "commit_key_index", the compositor will send key events in key index order
 * regardless of z-order in the surface group.
 * Key index set to each layer becomes effective after "commit_key_index" request.
 * Parameter 'commit' should be 1 when applying the key index order.
 * Set parameter 'commit' to 0 not to use the key index order.
 * If anonymous layer is allowed, the key index order doesn't work.
 */
static inline void
wl_webos_surface_group_commit_key_index(struct wl_webos_surface_group *wl_webos_surface_group, uint32_t commit)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group,
			 WL_WEBOS_SURFACE_GROUP_COMMIT_KEY_INDEX, commit);
}

/**
 * @ingroup iface_wl_webos_surface_group_layer
 * @struct wl_webos_surface_group_layer_listener
 */
struct wl_webos_surface_group_layer_listener {
	/**
	 * notify surface-group-owner that surface is attached to this layer
	 *
	 * When any surafce is attached to this layer, the compositor
	 * needs to notify surface-group-owner.
	 */
	void (*surface_attached)(void *data,
				 struct wl_webos_surface_group_layer *wl_webos_surface_group_layer);
	/**
	 * notify surface-group-owner that surface is detached from this layer
	 *
	 * When any surafce is detached from this layer, the compositor
	 * needs to notify surface-group-owner. This will be usefull if
	 * surface attached to this layer is destroyed by associated
	 * surface-group-client.
	 */
	void (*surface_detached)(void *data,
				 struct wl_webos_surface_group_layer *wl_webos_surface_group_layer);
};

/**
 * @ingroup wl_webos_surface_group_layer_iface
 */
static inline int
wl_webos_surface_group_layer_add_listener(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer,
					  const struct wl_webos_surface_group_layer_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) wl_webos_surface_group_layer,
				     (void (**)(void)) listener, data);
}

#define WL_WEBOS_SURFACE_GROUP_LAYER_SET_Z_INDEX	0
#define WL_WEBOS_SURFACE_GROUP_LAYER_SET_KEY_INDEX	1
#define WL_WEBOS_SURFACE_GROUP_LAYER_DESTROY	2

/**
 * @ingroup iface_wl_webos_surface_group_layer
 */
#define WL_WEBOS_SURFACE_GROUP_LAYER_SET_Z_INDEX_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group_layer
 */
#define WL_WEBOS_SURFACE_GROUP_LAYER_SET_KEY_INDEX_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_surface_group_layer
 */
#define WL_WEBOS_SURFACE_GROUP_LAYER_DESTROY_SINCE_VERSION	1

/** @ingroup iface_wl_webos_surface_group_layer */
static inline void
wl_webos_surface_group_layer_set_user_data(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) wl_webos_surface_group_layer, user_data);
}

/** @ingroup iface_wl_webos_surface_group_layer */
static inline void *
wl_webos_surface_group_layer_get_user_data(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer)
{
	return wl_proxy_get_user_data((struct wl_proxy *) wl_webos_surface_group_layer);
}

static inline uint32_t
wl_webos_surface_group_layer_get_version(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer)
{
	return wl_proxy_get_version((struct wl_proxy *) wl_webos_surface_group_layer);
}

/**
 * @ingroup iface_wl_webos_surface_group_layer
 *
 * Updates the z index for this layer. The compositor will move the surface
 * attached to this layer accordingly. If no surface is attached to this
 * layer nothing will happen
 */
static inline void
wl_webos_surface_group_layer_set_z_index(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer, int32_t z_index)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group_layer,
			 WL_WEBOS_SURFACE_GROUP_LAYER_SET_Z_INDEX, z_index);
}

/**
 * @ingroup iface_wl_webos_surface_group_layer
 *
 * Sets the key index for this layer. The compositor will send key events
 * to this layer accordingly after "commit_key_index" request.
 * If no surface is attached to this layer nothing will happen.
 * Key index should be neither redundant nor 0 (0 is onwner's key index).
 * The larger the key index, the faster the layer receives the key event.
 */
static inline void
wl_webos_surface_group_layer_set_key_index(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer, int32_t key_index)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group_layer,
			 WL_WEBOS_SURFACE_GROUP_LAYER_SET_KEY_INDEX, key_index);
}

/**
 * @ingroup iface_wl_webos_surface_group_layer
 *
 * Destroys the surface group layer object.
 */
static inline void
wl_webos_surface_group_layer_destroy(struct wl_webos_surface_group_layer *wl_webos_surface_group_layer)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_surface_group_layer,
			 WL_WEBOS_SURFACE_GROUP_LAYER_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) wl_webos_surface_group_layer);
}

#ifdef  __cplusplus
}
#endif

#endif