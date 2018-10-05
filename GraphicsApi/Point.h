#pragma once
#include <array>
#include <iostream>  
template<class T,int nDim>

class Point
{

private:
	std::array< T, nDim> dimentions;
public:
	typedef T ValueType;
	Point() : dimentions() {}


	T& operator[](int const i)
	{
		return dimentions[i];
	}

	T const& operator[](int const i) const
	{
		return dimentions[i];
	}

	Point(T x, T y, T z)
	{
		dimentions[0] = x;
		dimentions[1] = y;
		dimentions[2] = z;
	}

	Point operator+(const Point& p)
	{
		Point<T, nDim> q;
		for (int i = 0; i < nDim; i++)
		{
			q[i] += dimentions[i] + p[i];
		}
		return q;
	}
	Point operator-(const Point& p) {
		Point<T, nDim> q;
		for (int i = 0; i < nDim; i++) {
			q[i] = dimentions[i] - p[i];
		}
		return q;
	}

	bool operator==(const Point& p) {
		Point<T, nDim> q;
		for (int i = 0; i < nDim; i++) {
			if (p[i] != dimentions[i]) {
				return false;
			}
		}
		return true;
	}

};

typedef Point< float, 3 > Point3DFloat;
typedef Point< double, 3 > Point3DDouble;
typedef Point< long, 3 > Point3DLong;
typedef Point< int, 3 > Point3DInt;