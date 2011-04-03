// ======================================================================================
// File         : Keyboard.cpp
// Author       : Wu Jie 
// Last Change  : 10/29/2009 | 16:32:34 PM | Thursday,October
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// includes 
///////////////////////////////////////////////////////////////////////////////

#include "exlibs.h"
#include "Keyboard.h"

// ######################### 
namespace ex { 
// ######################### 

///////////////////////////////////////////////////////////////////////////////
// defines
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

CKeyboard::CKeyboard ()
    : m_pKeyState (NULL)
{
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

CKeyboard::~CKeyboard ()
{
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

void CKeyboard::Update ()
{
    // TODO:
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

bool CKeyboard::IsKeyDown ( EKeys::Enum _key ) const
{
    return false;
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

bool CKeyboard::IsKeyUp ( EKeys::Enum _key ) const
{
    return false;
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

bool CKeyboard::IsKeyPressing ( EKeys::Enum _key ) const
{
    return false;
}

// ######################### 
} // end namespace ex 
// ######################### 



