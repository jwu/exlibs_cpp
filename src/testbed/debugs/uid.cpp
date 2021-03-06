// ======================================================================================
// File         : uid.cpp
// Author       : Wu Jie 
// Last Change  : 03/21/2010 | 18:48:27 PM | Sunday,March
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// includes 
///////////////////////////////////////////////////////////////////////////////

#include "testbed.h"

///////////////////////////////////////////////////////////////////////////////
// Test cases
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------
// Desc: 
// ------------------------------------------------------------------

TEST( uid_t, test, off )
{
    ex::uid_t uid1;
    ex_log("uid1 = %s\n", uid1.to_str<ex::dec|ex::hex>().c_str() );

    ex::uid_t uid2;
    ex_log("uid2 = %s\n", uid2.to_str<ex::dec|ex::hex>().c_str() );

    ex::uid_t uid3;
    ex_log("uid3 = %s\n", uid3.to_str<ex::dec|ex::hex>().c_str() );

    ex::uid_t uid4;
    ex_log("uid4 = %s\n", uid4.to_str<ex::dec|ex::hex>().c_str() );

    uid1 = uid2;
    ex_log("uid1 = %s\n", uid1.to_str<ex::dec|ex::hex>().c_str() );
}

