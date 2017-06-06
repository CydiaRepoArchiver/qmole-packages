/* GDK - The GIMP Drawing Kit
 * Copyright (C) 2011 Carlos Garnacho
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined (__GDKX_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdkx.h> can be included directly."
#endif

#ifndef __GDK_X11_DEVICE_H__
#define __GDK_X11_DEVICE_H__

#include <gdk/gdk.h>

G_BEGIN_DECLS

gint  gdk_x11_device_get_id  (GdkDevice *device);

G_END_DECLS

#endif /* __GDK_X11_DEVICE_H__ */
