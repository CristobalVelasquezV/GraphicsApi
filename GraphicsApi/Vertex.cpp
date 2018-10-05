#include "pch.h"
#include "Vertex.h"

Vertex::Vertex()
	:p(NULL), 
	hf(NULL)
{}

Vertex::Vertex( PointHalf_Edge * point,Half_Edge* halfedge)
	:p(point),
	hf(halfedge)
{}
