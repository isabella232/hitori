/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Hitori
 * Copyright (C) Philip Withnall 2007 <philip@tecnocode.co.uk>
 * 
 * Hitori is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * main.c is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with main.c.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#include <gtk/gtk.h>
#include <cairo/cairo.h>
#include "main.h"

#ifndef HITORI_INTERFACE_H
#define HITORI_INTERFACE_H

G_BEGIN_DECLS

#define FONT_SCALE 0.9
#define TAG_OFFSET 0.75

GtkWidget* hitori_create_interface (Hitori *hitori);
void hitori_draw_board (Hitori *hitori, cairo_t *cr, gboolean check_win);

G_END_DECLS

#endif /* HITORI_INTERFACE_H */
