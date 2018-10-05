#pragma once
#include <array>
class PointHalf_Edge
{

private:
	std::array<float,3> dimentions;
public:
	PointHalf_Edge() : dimentions() {}
	float& operator[](int const i)
	{
		return dimentions[i];
	}

	float const& operator[](int const i) const
	{
		return dimentions[i];
	}

	PointHalf_Edge(float x, float y, float z)
	{
		dimentions[0] = x;
		dimentions[1] = y;
		dimentions[2] = z;
	}

	PointHalf_Edge operator+(const PointHalf_Edge& p)
	{
		PointHalf_Edge q;
		for (int i = 0; i < 3; i++)
		{
			q[i] += dimentions[i] + p[i];
		}
		return q;
	}
	PointHalf_Edge operator-(const PointHalf_Edge& p) {
		PointHalf_Edge q;
		for (int i = 0; i < 3; i++) {
			q[i] = dimentions[i] - p[i];
		}
		return q;
	}

	bool operator==(const PointHalf_Edge& p) {
		PointHalf_Edge q;
		for (int i = 0; i < 3; i++) {
			if (p[i] != dimentions[i]) {
				return false;
			}
		}
		return true;
	}
};

