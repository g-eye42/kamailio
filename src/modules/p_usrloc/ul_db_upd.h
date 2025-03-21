/* sp-ul_db module
 *
 * Copyright (C) 2007 1&1 Internet AG
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef SP_P_USRLOC_DB_UPD_H
#define SP_P_USRLOC_DB_UPD_H

#include "../../lib/srdb1/db.h"
#include "ul_db_handle.h"

int db_update(ul_db_handle_t *handle, str *table, db_key_t *_k, db_op_t *_o,
		db_val_t *_v, db_key_t *_uk, db_val_t *_uv, int _n, int _un);

#endif
