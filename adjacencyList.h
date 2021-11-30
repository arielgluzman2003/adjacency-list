/* AdjacencyList.h */

/*
	Adjacency List Implementation
	-----------------------------

	Programmer: Ariel Gluzman
	Date:		29.11.2021
	Language: C

	General: 
		An Adjacency-List is a data-structure used to represent edges of a graph [G = (V,E)]
		"AdjacencyList.h/c" 's implementation is as follows (Top-Down):
			(Graph) Graph has |V| nodes of AdjNode type, 
			(AdjNode) which consists of Pointer to next Node and Vertex,  
			(Vertex) which holds a char key.

	
	Example:
		consider graph G = (V, E) which is represented as an Adjacency-List,
		
		V' is a subset of set V (Vertices) and consists of {Vertex1, Vertex2}
		E' is a subset of set E (Edges) and consists of {(Vertex1, Vertex1), (Vertex2, Vertex1)} 

	view of G' = (V', E') as part of G, represented as an Adjacency-List
	or rather - the representation of G' in the computer memory:

		Graph G' in G:

			+------------------+
			|   +-----------+  |         +-----------+
			|   |  Vertex1  |  |	     |  Vertex1  |
			|   |  (value)  |  | +-----> |  (value)  |
			|   +-----------+  | |       +-----------+
			|   | next Node | ---+       | next Node | ....-> NULL
			|   +-----------+  |         +-----------+
			+------------------+
			|   +-----------+  |        +-----------+
			|   |  Vertex2  |  |        |  Vertex1  |
			|   |  (value)  |  | +----> |  (value)  |
			|   +-----------+  | |      +-----------+
			|   | next Node | ---+      | next Node | ....-> NULL
			|   +-----------+  |        +-----------+
			+------------------+
			| ................ |
			| ................ |
			| ................ |
			| ................ |
			| ................ |


		Graph G':
			   *******           *******  <---+
			 *         * ----> *         *    |
			*  Vertex2  *     *  Vertex1  *   |
			 *         *       *         * ---+
			   *******           *******

*/

#ifndef _ADJACENCY_LIST

#define _ADJACENCY_LIST

typedef struct vertex
{
	char value;
}	Vertex, * PVertex;

typedef struct adjacencyNode
{
	Vertex v;
	struct adjacencyNode* adjv;

}	AdjNode, * PAdjNode;

typedef struct graph {
	PAdjNode vertices;

} Graph, * PGraph;

void addEdge(PAdjNode n, PVertex v);
void initGraph(PGraph G, Vertex V[], int VSize);
void printGraph(PGraph g, int VSize);
int isEdge(PGraph, int VSize, PVertex out, PVertex in);
void deleteEdge(PGraph G, int VSize, PVertex in, PVertex out);
PAdjNode _findEdge(PGraph G, int VSize, PVertex out, PVertex in);
PAdjNode _findPreviousEdge(PGraph G, int VSize, PVertex out, PVertex in);
int outDegree(PGraph G, int VSize, PVertex v);
int inDegree(PGraph G, int VSize, PVertex v);
PAdjNode _isVertexOf(PGraph G, int VSize, PVertex v);

#endif
