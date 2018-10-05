#pragma once
#include "Point.h"
template<class T, int nDim>
class Vector
{
private:
	Point<T,nDim> p;

public:
	typedef T ValueType;
	Vector(){}
	Vector(Point<T,nDim> q) {
		p = q;
	}
	Vector(Point<T, nDim> r, Point<T, nDim> q) {
		p = r - q;
	}
	Vector(T x, T y, T z) {
		p = Point<T, 3>(x, y, z);
	}

	T& operator[](int const i)
	{
		return p[i];
	}

	T const& operator[](int const i) const
	{
		return p[i];
	}

	Vector operator+(Vector& v) {
		Vector<T, nDim> vv;
		for (int i = 0; i < nDim; i++) {
			vv[i] = p[i] + v[i];
		}
		return vv;
	}
};

typedef Vector< float, 3 > Vector3DFloat;

