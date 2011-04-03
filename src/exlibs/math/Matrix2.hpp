// ======================================================================================
// File         : Matrix2.hpp
// Author       : Wu Jie 
// Last Change  : 02/07/2010 | 10:24:41 AM | Sunday,February
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// defines
///////////////////////////////////////////////////////////////////////////////

// ######################### 
namespace ex { 
// ######################### 

// ------------------------------------------------------------------
// Desc: static member defines  
// ------------------------------------------------------------------

// ========================================================
// zero 
// ========================================================

template < typename T >
const Matrix2<T> Matrix2<T>::zero ( T(0), T(0),
                                      T(0), T(0) );

// ========================================================
// identity 
// ========================================================

template < typename T >
const Matrix2<T> Matrix2<T>::identity ( T(1), T(0),
                                          T(0), T(1) );

// ######################### 
} // end namespace ex 
// ######################### 

