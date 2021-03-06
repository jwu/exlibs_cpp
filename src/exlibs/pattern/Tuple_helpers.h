// ======================================================================================
// File         : Ref.h
// Author       : Wu Jie 
// Last Change  : 08/18/2009 | 00:14:06 AM | Tuesday,August
// Description  : 
// ======================================================================================

// #################################################################################
#ifndef REF_H_1250525649
#define REF_H_1250525649
// #################################################################################

///////////////////////////////////////////////////////////////////////////////
// include
///////////////////////////////////////////////////////////////////////////////

// ######################### 
namespace ex { 
// ######################### 

///////////////////////////////////////////////////////////////////////////////
// class ReferenceWrapper 
// 
// Purpose: 
// 
///////////////////////////////////////////////////////////////////////////////

template < typename T >
class ReferenceWrapper
{
    ///////////////////////////////////////////////////////////////////////////////
    // typedefs
    ///////////////////////////////////////////////////////////////////////////////

public:

    typedef T type_t;

    ///////////////////////////////////////////////////////////////////////////////
    // constructor & destructor
    ///////////////////////////////////////////////////////////////////////////////

public:

    explicit ReferenceWrapper ( T& _t ) : m_pT(&_t) {}

    ///////////////////////////////////////////////////////////////////////////////
    // public member function
    ///////////////////////////////////////////////////////////////////////////////

public:

    operator T& () const { return *m_pT; }
    T& get () const { return *m_pT; }
    T* GetPointer () const { return m_pT; }

    ///////////////////////////////////////////////////////////////////////////////
    // private member data
    ///////////////////////////////////////////////////////////////////////////////

private:

    T* m_pT;

}; // end class ReferenceWrapper 


///////////////////////////////////////////////////////////////////////////////
// Ref & CRef function 
///////////////////////////////////////////////////////////////////////////////


// ------------------------------------------------------------------ 
// Desc: Ref 
// ------------------------------------------------------------------ 

template < typename T > 
INLINE const ReferenceWrapper<T> Ref ( T& _t )
{ 
    return ReferenceWrapper<T>(_t);
}

// ------------------------------------------------------------------ 
// Desc: CRef 
// ------------------------------------------------------------------ 

template < typename T > 
INLINE const ReferenceWrapper<const T> CRef ( const T& _t )
{
    return ReferenceWrapper<const T>(_t);
}

// ######################### 
} // end namespace ex 
// ######################### 

// #################################################################################
#endif // END REF_H_1250525649
// #################################################################################

