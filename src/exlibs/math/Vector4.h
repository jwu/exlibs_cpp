// ======================================================================================
// File         : Vector4.h
// Author       : Wu Jie 
// Last Change  : 04/16/2010 | 22:11:31 PM | Friday,April
// Description  : 
// ======================================================================================

// #################################################################################
#ifndef VECTOR4_H_1271427094
#define VECTOR4_H_1271427094
// #################################################################################

// ######################### 
namespace ex { 
// ######################### 

///////////////////////////////////////////////////////////////////////////////
// class Vector4 
// 
// Purpose: 
// 
///////////////////////////////////////////////////////////////////////////////

template < typename T >
class Vector4
{
    ///////////////////////////////////////////////////////////////////////////////
    // friend functions
    ///////////////////////////////////////////////////////////////////////////////

    template < typename U > friend Vector4<U> operator + ( const Vector4<U>& _vec1, const Vector4<U>& _vec2 );
    template < typename U > friend Vector4<U> operator - ( const Vector4<U>& _vec1, const Vector4<U>& _vec2 );
    template < typename U > friend Vector4<U> operator * ( const Vector4<U>& _vec1, const Vector4<U>& _vec2 );
    template < typename U > friend Vector4<U> operator * ( const Vector4<U>& _vec, U _scalar );
    template < typename U > friend Vector4<U> operator * ( U _scalar, const Vector4<U>& _vec );
    template < typename U > friend Vector4<U> operator / ( const Vector4<U>& _vec1, const Vector4<U>& _vec2 );
    template < typename U > friend Vector4<U> operator / ( const Vector4<U>& _vec, U _scalar );

    ///////////////////////////////////////////////////////////////////////////////
    // typedefs 
    ///////////////////////////////////////////////////////////////////////////////

public:

    typedef Vector4<T>  self_t;

    ///////////////////////////////////////////////////////////////////////////////
    // static const values
    ///////////////////////////////////////////////////////////////////////////////

public:

    static const self_t zero;
    static const self_t one;

    ///////////////////////////////////////////////////////////////////////////////
    // public member functions 
    ///////////////////////////////////////////////////////////////////////////////

public:

    // constructor
    Vector4() { /*mathop::zero(m_data);*/ }
    Vector4( const self_t& _vec ) { this->set(_vec); } 
    explicit Vector4 ( const Vector3<T>& _vec3 ) { this->set( _vec3 ); }
    explicit Vector4( const T (&_array)[4] ) { this->set(_array); }
    explicit Vector4( T _value ) { this->set(_value); } 
    Vector4 ( T _x, T _y, T _z, T _w ) { this->set( _x, _y, _z, _w ); }

    // set functions
    void set ( T _x, T _y, T _z, T _w ) {
        T list[4] = { _x, _y, _z, _w };
        this->set(list);
    }
    void set( const self_t& _vec ) { mathop::set( m_data, _vec.m_data ); }
    void set( const Vector3<T>& _vec3 ) { this->set( _vec3.x(), _vec3.y(), _vec3.z(), T(1) ); }
    void set( const T (&_array)[4] ) { mathop::set( m_data, _array ); }
    void set( T _value ) { mathop::splat( m_data, _value ); }

    // get functions
    T& get( int _idx ) { return intri::getref( m_data, _idx ); }
    const T get( int _idx ) const { return intri::get( m_data, _idx ); }
    T& operator [] ( int _idx ) { return get(_idx); }
    const T operator [] ( int _idx ) const { return get(_idx); }

    // 
    INLINE T& x() { return this->get(0); }
    INLINE T& y() { return this->get(1); }
    INLINE T& z() { return this->get(2); }
    INLINE T& w() { return this->get(3); }

    // 
    INLINE const T x() const { return this->get(0); }
    INLINE const T y() const { return this->get(1); }
    INLINE const T z() const { return this->get(2); }
    INLINE const T w() const { return this->get(3); }

    //
    T* getPtr() { return m_data; }

    //
    INLINE Vector4<int> to_vec4i_t () const { return Vector4<int> ( (int)x(), (int)y(), (int)z(), (int)w() ); }
    INLINE Vector4<float> to_vec4f_t () const { return Vector4<float> ( (float)x(), (float)y(), (float)z(), (float)w() ); }

    //
    self_t& operator = ( const self_t& _vec ) {
        this->set(_vec);
        return *this;
    }

    //
    self_t operator - () const {
        ex_assert(!TypeTraits<T>::isUnsignedInt, "Don't use negative operator for unsigned type\n");
        self_t vec(*this);
        mathop::negative( vec.m_data, vec.m_data );
        return vec;
    }
    void negative() {
        mathop::negative( m_data, m_data );
    }

    //
    self_t& operator += ( const self_t& _vec ) {
        mathop::add( m_data, m_data, _vec.m_data );
        return *this;
    }

    // for const value
    self_t operator + ( const self_t& _vec ) const {
        self_t vec_result;
        mathop::add( vec_result.m_data, m_data, _vec.m_data );
        return vec_result;
    }

    //
    self_t& operator -= ( const self_t& _vec ) {
        mathop::sub( m_data, m_data, _vec.m_data );
        return *this;
    }

    // for const value
    self_t operator - ( const self_t& _vec ) const {
        self_t vec_result;
        mathop::sub( vec_result.m_data, m_data, _vec.m_data );
        return vec_result;
    }

    //
    self_t& operator *= ( const self_t& _vec ) {
        mathop::mul( m_data, m_data, _vec.m_data );
        return *this;
    }

    //
    self_t operator * ( const self_t& _vec ) const {
        self_t vec_result;
        mathop::mul( vec_result.m_data, m_data, _vec.m_data );
        return vec_result;
    }

    //
    self_t& operator *= ( T _scalar ) {
        mathop::mul_scalar( m_data, m_data, _scalar );
        return *this;
    }

    //
    self_t operator * ( T _scalar ) const {
        self_t vec_result;
        mathop::mul_scalar( vec_result.m_data, m_data, _scalar );
        return vec_result;
    }

    //
    self_t& operator /= ( const self_t& _vec ) {
        mathop::div( m_data, m_data, _vec.m_data );
        return *this;
    }

    //
    self_t operator / ( const self_t& _vec ) const {
        self_t vec_result;
        mathop::div( vec_result.m_data, m_data, _vec.m_data );
        return vec_result;
    }

    //
    self_t& operator /= ( T _scalar ) {
        mathop::div_scalar( m_data, m_data, _scalar );
        return *this;
    }

    //
    self_t operator / ( T _scalar ) const {
        self_t vec_result;
        mathop::div_scalar( vec_result.m_data, m_data, _scalar );
        return vec_result;
    }

    // define in Operation.h
    self_t& operator *= ( const Matrix4<T>& _mat4 );
    self_t operator * ( const Matrix4<T>& _mat4 ) const;

    //
    bool operator == ( const self_t& _vec ) const { return mathop::is_equal( m_data, _vec.m_data, mathop::epsilon<T>() ); }
    bool operator != ( const self_t& _vec ) const { return !(*this==_vec); }

    // dot,cross
    T dot( const self_t& _vec ) const { return mathop::dot( m_data, _vec.m_data ); }

    self_t cross( const self_t& _vec ) const {
        self_t vec_result;
        mathop::cross( vec_result.m_data, m_data, _vec.m_data );
        return vec_result;
    }

    // length
    T length() const { return mathop::length(m_data); }
    T lengthSQR() const { return mathop::length_sqr(m_data); }

    // normalize
    bool is_normalized() const { 
        return ( mathop::is_equal( lengthSQR(), T(1), mathop::epsilon<T>() ) ); 
    }
    void get_normalize( self_t* _pResult ) const {
        const T length_sqr = lengthSQR();

        if ( mathop::is_equal( length_sqr, T(1), mathop::epsilon<T>() ) )
        {
            _pResult->set(*this);
            return;
        }

        ex_assert( !mathop::is_zero( length_sqr, mathop::epsilon<T>() ), "Can't division zero length" );

        const T inv_length = mathop::inv_sqrt( length_sqr );
        mathop::mul_scalar( _pResult->m_data, m_data, inv_length );
    }
    result_t normalize() {
        const T length_sqr = lengthSQR();

        if ( mathop::is_equal( length_sqr, T(1), mathop::epsilon<T>() ) )
            return EResult::ok;

        if( mathop::is_zero( length_sqr, mathop::epsilon<T>() ) )
            return EResult::infinity;

        const T inv_length = mathop::inv_sqrt( length_sqr );
        mathop::mul_scalar( m_data, m_data, inv_length );

        return EResult::ok;
    }

    ///////////////////////////////////////////////////////////////////////////////
    // generic functions 
    ///////////////////////////////////////////////////////////////////////////////

public:

    template < class SELF_TYPE > friend class PropertyInstance;
    template < uint FLAGS >
    INLINE string_t to_str() const
    {
        string_t string = ex::to_str<FLAGS>(this->x()) + "," + 
                          ex::to_str<FLAGS>(this->y()) + "," +
                          ex::to_str<FLAGS>(this->z()) + "," +
                          ex::to_str<FLAGS>(this->w())
                          ;
        return string;
    }
    static const string_id_t& type_name () 
    {
        static const string_id_t strID = string_id_t( string_t("Vector4<") + TypeTraits<T>::type_name().c_str() + ">" );
        return strID;
    }
    void serialize ( ISerializeNode* _pNode );

    ///////////////////////////////////////////////////////////////////////////////
    // protected member data
    ///////////////////////////////////////////////////////////////////////////////

protected:

    T m_data[4];

}; // end class Vector4

// ######################### 
} // end namespace ex 
// ######################### 

// #################################################################################
#endif // END VECTOR4_H_1271427094
// #################################################################################
