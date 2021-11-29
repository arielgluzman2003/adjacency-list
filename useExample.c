#include <stdio.h>
#include "adjacencyList.h"

int main()
{
	Vertex V[4] = { {'A'}, {'B'} ,{'C'} ,{'D'} };
	int vertices = sizeof(V); /* |V| */
	Graph G;
	initGraph(&G, V, vertices);

/* BUILDING GRAPH G ACCORDING TO GRAPH.BMP */

	/* A ∈ V */
	addEdge(&G.vertices[0], &V[0]); /* (A,A) ∈ E */
	addEdge(&G.vertices[0], &V[1]); /* (A,B) ∈ E */
	addEdge(&G.vertices[0], &V[2]); /* (A,C) ∈ E */

	/* B ∈ V */
	addEdge(&G.vertices[1], &V[3]); /* (B,D) ∈ E */

	/* C ∈ V */
	addEdge(&G.vertices[2], &V[0]); /* (C,A) ∈ E */
	addEdge(&G.vertices[2], &V[3]); /* (C,D) ∈ E */

	/* D ∈ V */
	/* No edges out of Vertex 'D' */

/* END BUILDING */

	printGraph(&G, vertices);

	/* Assert integrity of isEdge */
	printf("\n%s", isEdge(&G, vertices, &V[0], &V[1]) == 1 ? "Edge (A,B) is in E" : "Edge (A,B) is NOT in E");
	printf("\n%s", isEdge(&G, vertices, &V[0], &V[3]) == 1 ? "Edge (A,D) is in E" : "Edge (A,D) is NOT in E");

	deleteEdge(&G, vertices, &V[0], &V[1]);

	/* Show Difference after deleting edge (A,B) */
	printf("\n%s", isEdge(&G, vertices, &V[0], &V[1]) == 1 ? "Edge (A,B) is in E" : "Edge (A,B) is NOT in E");
}
