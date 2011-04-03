// ======================================================================================
// File         : wrap_EMEND.cpp
// Author       : Wu Jie 
// Last Change  : 09/02/2010 | 13:35:59 PM | Thursday,September
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// includes
///////////////////////////////////////////////////////////////////////////////

#include "dho_editor.h"
#include "wrap_lua.h"

///////////////////////////////////////////////////////////////////////////////
// defines
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

static const luaL_Reg method_f [] = {
    { NULL, NULL }
};

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

int luaopen_EMEND ( lua_State* _l ) {

    luaL_register( _l, "EMEND", method_f ); {
        lua_pushinteger( _l, EME_ACTION ); lua_setfield( _l, -2, "action" );
        lua_pushinteger( _l, EME_PAWUXIAN ); lua_setfield( _l, -2, "paowuxian" );
        lua_pushinteger( _l, EME_TIME ); lua_setfield( _l, -2, "time" );
    }

    return 1;
}
