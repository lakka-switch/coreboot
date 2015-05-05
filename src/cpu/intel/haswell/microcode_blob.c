/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2011 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

unsigned microcode[] = {
	/*
	 * FIXME: Can we just include both microcodes regardless, or is there
	 * a very good reason why we only use one at a time?
	 */
	#if CONFIG_INTEL_LYNXPOINT_LP
	#include "../../../../blobs/cpu/intel/model_4065x/microcode.h"
	#else
	#include "../../../../blobs/cpu/intel/model_306cx/microcode.h"
	#endif
};
