/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * Copyright (C) 2001-2007 Philip Withnall <philip@tecnocode.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
 *
 * The Totem project hereby grant permission for non-gpl compatible GStreamer
 * plugins to be used and distributed together with GStreamer and Totem. This
 * permission are above and beyond the permissions granted by the GPL license
 * Totem is covered by.
 *
 * Monday 7th February 2005: Christian Schaller: Add exception clause.
 * See license_change file for details.
 *
 */

#include <gtk/gtk.h>
#include <glib.h>

#ifndef TOTEM_CELLRENDERERVIDEO_H
#define TOTEM_CELLRENDERERVIDEO_H

G_BEGIN_DECLS

#define TOTEM_TYPE_CELL_RENDERER_VIDEO		(totem_cell_renderer_video_get_type ())
#define TOTEM_CELL_RENDERER_VIDEO(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), TOTEM_TYPE_CELL_RENDERER_VIDEO, TotemCellRendererVideo))
#define TOTEM_CELL_RENDERER_VIDEO_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), TOTEM_TYPE_CELL_RENDERER_VIDEO, TotemCellRendererVideoClass))
#define TOTEM_IS_CELL_RENDERER_VIDEO(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), TOTEM_TYPE_CELL_RENDERER_VIDEO))
#define TOTEM_IS_CELL_RENDERER_VIDEO_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), TOTEM_TYPE_CELL_RENDERER_VIDEO))
#define TOTEM_CELL_RENDERER_VIDEO_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), TOTEM_TYPE_CELL_RENDERER_VIDEO, TotemCellRendererVideoClass))

typedef struct _TotemCellRendererVideoPrivate	TotemCellRendererVideoPrivate;

/**
 * TotemCellRendererVideo:
 *
 * All the fields in the #TotemCellRendererVideo structure are private and should never be accessed directly.
 **/
typedef struct {
	GtkCellRenderer parent;
	TotemCellRendererVideoPrivate *priv;
} TotemCellRendererVideo;

/**
 * TotemCellRendererVideoClass:
 * @parent: the parent class
 *
 * The class structure for the #TotemCellRendererVideo type.
 **/
typedef struct {
	GtkCellRendererClass parent;
} TotemCellRendererVideoClass;

GType totem_cell_renderer_video_get_type (void);
TotemCellRendererVideo *totem_cell_renderer_video_new (gboolean use_placeholder);

G_END_DECLS

#endif /* TOTEM_CELLRENDERERVIDEO_H */
