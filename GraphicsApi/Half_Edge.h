#pragma once
#include "Vertex.h"
class Half_Edge
{
private:
	Vertex* vertex;
	Half_Edge* next;
	Half_Edge* previus;
public:
	inline Half_Edge();
	inline Half_Edge(Vertex* v, Half_Edge* n, Half_Edge* p);
};

