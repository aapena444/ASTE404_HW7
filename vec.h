#ifndef _VEC_H
#define _VEC_H
#include <ostream>
#include <math.h>

/**
 * @brief Generic 3D vector of type T.
 * 
 * This class represents a vector in 3D space and provides 
 * various operations such as addition, subtraction, dot product,
 * and magnitude calculation.
 */
template<typename T>
class _vec3 {
public:
    _vec3<T>() : d{0, 0, 0} {} //!< Default constructor initializes the vector to (0, 0, 0).

    /**
     * @brief Parameterized constructor for the vector.
     * 
     * @param a The x-coordinate of the vector.
     * @param b The y-coordinate of the vector.
     * @param c The z-coordinate of the vector.
     */
    _vec3<T>(T a, T b, T c) : d{a, b, c} {}

    /**
     * @brief Access operator for vector components.
     * 
     * @param i The index of the component to access (0 for x, 1 for y, 2 for z).
     * @return A reference to the component at index i.
     */
    T& operator[] (int i) { return d[i]; }

    /**
     * @brief Access operator for vector components (const version).
     * 
     * @param i The index of the component to access (0 for x, 1 for y, 2 for z).
     * @return The component at index i.
     */
    T operator[] (int i) const { return d[i]; }

    /**
     * @brief Vector addition operator.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The resulting vector after addition.
     */
    friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
    }

    /**
     * @brief Vector subtraction operator.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The resulting vector after subtraction.
     */
    friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
    }

    /**
     * @brief Dot product of two vectors.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The dot product of the two vectors.
     */
    friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
        return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
    }

    /**
     * @brief Magnitude of the vector.
     * 
     * \f$ |a| = \sqrt{a.x^2 + a.y^2 + a.z^2} \f$
     * 
     * @param a The vector.
     * @return The magnitude of the vector.
     */
    friend double mag(const _vec3<T>& a) {
        return sqrt(dot(a, a));
    }

    /**
     * @brief Output stream operator for the vector.
     * 
     * @param out The output stream.
     * @param a The vector to output.
     * @return The output stream.
     */
    friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
        out << a[0] << " " << a[1] << " " << a[2];
        return out;
    }

protected:
    T d[3]; //!< Array to hold the vector components (x, y, z).
};

using double3 = _vec3<double>; // assign a nickname

#endif
