#include "pch.h"
#include "Half_Edge.h"


Half_Edge::Half_Edge() :
	vertex(NULL),
	next(NULL),
	previus(NULL)
{}

Half_Edge::Half_Edge(Vertex * v, Half_Edge * n, Half_Edge * p):
	vertex(v),
	next(n),
	previus(p)
{}