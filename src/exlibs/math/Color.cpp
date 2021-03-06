// ======================================================================================
// File         : Color.cpp
// Author       : Wu Jie 
// Last Change  : 04/19/2010 | 10:10:51 AM | Monday,April
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
// includes 
///////////////////////////////////////////////////////////////////////////////

#include "exlibs.h"
#include "Color.h"

// #########################
namespace ex { 
// #########################

///////////////////////////////////////////////////////////////////////////////
// static defines
///////////////////////////////////////////////////////////////////////////////

// color3u
const Color3u Color3u::black ( 0, 0, 0 );
const Color3u Color3u::white ( 255, 255, 255 );

// color3f
const Color3f Color3f::black ( 0.0f, 0.0f, 0.0f );
const Color3f Color3f::white ( 1.0f, 1.0f, 1.0f );

///////////////////////////////////////////////////////////////////////////////
// Color3u
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4u Color3u::toColor4u () const
{
    return Color4u(*this);
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3f Color3u::toColor3f () const
{
    return Color3f( mathop::clamp<float>( float(r)/255.0f, 0.0f, 1.0f ), 
                     mathop::clamp<float>( float(g)/255.0f, 0.0f, 1.0f ),
                     mathop::clamp<float>( float(b)/255.0f, 0.0f, 1.0f ) );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4f Color3u::toColor4f () const
{
    return Color4f( mathop::clamp<float>( float(r)/255.0f, 0.0f, 1.0f ), 
                     mathop::clamp<float>( float(g)/255.0f, 0.0f, 1.0f ),
                     mathop::clamp<float>( float(b)/255.0f, 0.0f, 1.0f ) );
}

///////////////////////////////////////////////////////////////////////////////
// Color4u
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3u Color4u::toColor3u () const
{
    return Color3u ( r, g, b ); 
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3f Color4u::toColor3f () const
{
    return Color3f( mathop::clamp<float>( float(r)/255.0f, 0.0f, 1.0f ), 
                     mathop::clamp<float>( float(g)/255.0f, 0.0f, 1.0f ),
                     mathop::clamp<float>( float(b)/255.0f, 0.0f, 1.0f ) );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4f Color4u::toColor4f () const
{
    return Color4f( mathop::clamp<float>( float(r)/255.0f, 0.0f, 1.0f ), 
                     mathop::clamp<float>( float(g)/255.0f, 0.0f, 1.0f ),
                     mathop::clamp<float>( float(b)/255.0f, 0.0f, 1.0f ) );
}

///////////////////////////////////////////////////////////////////////////////
// Color3f
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3u Color3f::toColor3u () const
{
    return Color3u( mathop::clamp<uint8>( uint8(r*255.0f), 0, 255 ), 
                     mathop::clamp<uint8>( uint8(g*255.0f), 0, 255 ),
                     mathop::clamp<uint8>( uint8(b*255.0f), 0, 255 ) );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4u Color3f::toColor4u () const
{
    return Color4u( mathop::clamp<uint8>( uint8(r*255.0f), 0, 255 ), 
                     mathop::clamp<uint8>( uint8(g*255.0f), 0, 255 ),
                     mathop::clamp<uint8>( uint8(b*255.0f), 0, 255 ),
                     255 );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4f Color3f::toColor4f () const
{
    return Color4f(*this);
}

///////////////////////////////////////////////////////////////////////////////
// Color4f
///////////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3u Color4f::toColor3u () const
{
    return Color3u( mathop::clamp<uint8>( uint8(r*255.0f), 0, 255 ), 
                     mathop::clamp<uint8>( uint8(g*255.0f), 0, 255 ),
                     mathop::clamp<uint8>( uint8(b*255.0f), 0, 255 ) );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color4u Color4f::toColor4u () const
{
    return Color4u( mathop::clamp<uint8>( uint8(r*255.0f), 0, 255 ), 
                     mathop::clamp<uint8>( uint8(g*255.0f), 0, 255 ),
                     mathop::clamp<uint8>( uint8(b*255.0f), 0, 255 ),
                     mathop::clamp<uint8>( uint8(b*255.0f), 0, 255 ) );
}

// ------------------------------------------------------------------ 
// Desc: 
// ------------------------------------------------------------------ 

Color3f Color4f::toColor3f () const
{
    return Color3f ( r, g, b ); 
}

// #########################
} // end namespace ex 
// #########################

