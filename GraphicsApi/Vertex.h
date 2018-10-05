#pragma once
#include "PointHalf_Edge.h"
#include "Half_Edge.h"

class Vertex
{
private:
	PointHalf_Edge* p;
	Half_Edge* hf;
public:
	Vertex();
	Vertex(PointHalf_Edge* point,  Half_Edge* halfedge);
};

