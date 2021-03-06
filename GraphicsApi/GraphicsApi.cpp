#include "pch.h"
#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "Vertex.h"
#include "Half_Edge.h"
#include <cassert>

int main()
{
	std::cout << "Test Point"<< std::endl;
	Point3DFloat q(1, 1, 1);

	Point3DFloat p(1,1,1);
	std::cout << "X : " << p[0] << " Y : " << p[1] << " Z: " << p[2]<< std::endl;
	/*Operation Test*/
		//+
	Point3DFloat r = q + p;
	assert(r[0]==2 && r[1] == 2 && r[2] == 2);
	std::cout << "X : " << r[0] << " Y : " << r[1] << " Z: " <<r[2] << std::endl;
		//-
	r = q - p;
	assert(r[0] == 0 && r[1] == 0 && r[2] == 0);
	std::cout << "X : " << r[0] << " Y : " << r[1] << " Z: " << r[2] << std::endl;
		//==	
	assert(q == p);

	/*Vector Test*/
	std::cout << "Test Vector" << std::endl;
	Vector3DFloat v1(1, 1, 1);
	Vector3DFloat v2(1, 1, 1);
	std::cout << "X : " << v1[0] << " Y : " << v1[1] << " Z: " << v1[2] << std::endl;
	Vector3DFloat v3 = v1 + v2;
	std::cout << "X : " << v3[0] << " Y : " << v3[1] << " Z: " << v3[2] << std::endl;

	/*Vertex Test*/
	PointHalf_Edge vertexPoint(1, 1, 1); 
	PointHalf_Edge* point = &vertexPoint;

	//Half_Edge hf();

	//Vertex vertex(point, NULL);
}

