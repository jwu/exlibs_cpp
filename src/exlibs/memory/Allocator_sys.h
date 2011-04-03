// ======================================================================================
// File         : Allocator_sys.h
// Author       : Wu Jie 
// Last Change  : 08/14/2010 | 01:10:05 AM | Saturday,August
// Description  : 
// ======================================================================================

// #################################################################################
#ifndef ALLOCATOR_SYS_H_1281719408
#define ALLOCATOR_SYS_H_1281719408
// #################################################################################

///////////////////////////////////////////////////////////////////////////////
// includes
///////////////////////////////////////////////////////////////////////////////

#include "Allocator.h"
#include "pattern/singleton_macro.h"

// #########################
namespace ex { 
// #########################

///////////////////////////////////////////////////////////////////////////////
// class Allocator_sys 
// 
// Purpose: default system allocate
// 
///////////////////////////////////////////////////////////////////////////////

class EX_LIBS_DLL Allocator_sys : public Allocator
{
    ///////////////////////////////////////////////////////////////////////////////
    // singleton decl
    ///////////////////////////////////////////////////////////////////////////////

    EX_DECL_SINGLETON ( Allocator_sys );

    ///////////////////////////////////////////////////////////////////////////////
    // member functions 
    ///////////////////////////////////////////////////////////////////////////////

public:

    Allocator_sys();
    virtual ~Allocator_sys();

public:
    //
    virtual void* alloc( size_t _size );
    virtual void* allocAligned( size_t _size, uint _alignment );
    virtual void* realloc( void* _ptr, size_t _new_size );
    virtual void* reallocAligned( void* _ptr, size_t _new_size, uint _alignment );
    virtual void  free( void* _ptr );

}; // end class Allocator_sys 

// #########################
} // end namespace ex 
// #########################

// #################################################################################
#endif // END ALLOCATOR_SYS_H_1281719408
// #################################################################################
