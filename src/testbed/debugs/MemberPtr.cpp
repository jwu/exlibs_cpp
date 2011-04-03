// ======================================================================================
// File         : TMemberPtr.cpp
// Author       : Wu Jie 
// Last Change  : 09/26/2009 | 11:20:51 AM | Saturday,September
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// includes 
///////////////////////////////////////////////////////////////////////////////

#include "testbed.h"

///////////////////////////////////////////////////////////////////////////////
// Test cases
///////////////////////////////////////////////////////////////////////////////

struct CTest
{
    int m_Value;
};

// ------------------------------------------------------------------
// Desc: 
// ------------------------------------------------------------------

TEST( TMemberPtr, Debug, off )
{
    CTest test1;
    test1.m_Value = 10;
    CTest test2;
    test2.m_Value = 20;

    ex::TMemberPtr<CTest,int> memberPtr ( "Name", &CTest::m_Value );
    printf( "test1 = %d\n", memberPtr ( &test1 ) );
    printf( "test2 = %d\n", memberPtr ( &test2 ) );
    memberPtr ( &test1 ) = 30;
    printf( "test1 = %d\n", memberPtr ( &test1 ) );
}
