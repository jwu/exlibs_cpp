// ======================================================================================
// File         : lua_proxy.h
// Author       : Wu Jie 
// Last Change  : 09/02/2010 | 09:43:37 AM | Thursday,September
// Description  : 
// ======================================================================================

// #################################################################################
#ifndef LUA_PROXY_H_1283391819
#define LUA_PROXY_H_1283391819
// #################################################################################

///////////////////////////////////////////////////////////////////////////////
// defines
///////////////////////////////////////////////////////////////////////////////

// ######################### 
namespace ex { 
// ######################### 

// ######################### 
namespace lua { 
// ######################### 

///////////////////////////////////////////////////////////////////////////////
// class 
// 
// Purpose: 
// 
///////////////////////////////////////////////////////////////////////////////

class Object {

    ///////////////////////////////////////////////////////////////////////////////
    // public
    ///////////////////////////////////////////////////////////////////////////////

public:

    Object();
    virtual ~Object();

    void release ();
    void retain ();
    int refCount () const { return m_refCount; }

    ///////////////////////////////////////////////////////////////////////////////
    // protected
    ///////////////////////////////////////////////////////////////////////////////

protected:

    int m_refCount;

}; // end class Object 

///////////////////////////////////////////////////////////////////////////////
// class Proxy 
// 
// Purpose: 
// 
///////////////////////////////////////////////////////////////////////////////

struct Proxy {
    void* user_data;
    bool  own_by_gc;
}; // end class Proxy

// ######################### 
} // end namespace lua 
// ######################### 


// ######################### 
} // end namespace ex 
// ######################### 


// #################################################################################
#endif // END LUA_PROXY_H_1283391819
// #################################################################################


