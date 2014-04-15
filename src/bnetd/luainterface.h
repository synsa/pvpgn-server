/*
* Copyright (C) 2014  HarpyWar (harpywar@gmail.com)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
/*****/
#ifndef JUST_NEED_TYPES
#ifndef INCLUDED_LUA_PROTOS
#define INCLUDED_LUA_PROTOS


// FIXME: include one time on pvpgn load
#include "luawrapper.h"
#include <stdio.h>

#ifdef WIN32
#pragma comment(lib, "lua5.1.lib")
#endif


#define JUST_NEED_TYPES
#include "connection.h"
#undef JUST_NEED_TYPES

namespace pvpgn
{

	namespace bnetd
	{


		extern void lua_load(char const * scriptdir);
		extern void lua_unload();

		extern int lua_handle_command(t_connection * c, char const * text);

	}

}

#endif
#endif
