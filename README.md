#### definitions:
|V|  - Length of set V; Amount of _Vertices_ in a given Graph (Integer value).<br />
|E|  - Length of set E; Amount of _Edges_ in a given Graph (Integer value).<br />
Θ(n) - Fixed running-time complexity of given algorithm/function; n representing complexity class, n<sup>2</sup>.<br />
O(n) - Worst-Case running-time complexity of given algorithm/function. <br />
 E'  - A part/subset of E (Edges of Graph G), fully included in E i.e. E' ⊆ E

# Adjacency List
an adjacency list is a collection of unordered lists used to represent a finite graph.

  ![GraphAdjList c Visual explanation](https://user-images.githubusercontent.com/52013867/144012786-75071b5a-21ad-47b3-b4bf-6f35fd9e9398.png)

use _adjacencyList.h_ to create and manipulate **adjacency list represented graphs** in your C algorithms:
 
 7 'public' functions include:
 
 * _void initGraph(PGraph G, Vertex V[], int VSize)_ - <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 ***runtime: _Θ(|V|)_**,   **space: _Θ(|V|)_** <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
creates a graph and links it to pointer '**_G_**', allocates needed memory for<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
|V| vertices and sets their pointer to adjacency to NULL, effectively saying - "Zero edges come out of this vertex"

* _void printGraph(PGraph g, int VSize)_ - <br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(|V|+|E|)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  Prints current state of Graph G.

* _void addEdge(PAdjNode n, PVertex v)_ -<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(1)_, _space: Θ(1)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  adds new edge from _n_ to vertex _v_.<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  adds it at the begining of the list, right after n which is base of list.
        
* _int isEdge(PGraph, int VSize, PVertex out, PVertex in)_ - <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(|V|+|E|)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  finds if **(_in_, _out_) ∈ _E_** i.e. whether edge _out_ to _in_ is in **_G_** or not <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  returns **_1_** if exists, **_0_** if not.
  
* _void deleteEdge(PGraph G, int VSize, PVertex in, PVertex out)_ - <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(|V|+|E|)_, _removed space: Θ(1)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  finds if **(_in_, _out_) ∈ _E_** i.e. whether edge _out_ to _in_ is in **_G_** or not.<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  cuts it off the list if exists , and frees\deletes off the memory, _no-operation_ if not.
  
* _int outDegree(PGraph G, int VSize, PVertex V)_ - <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(|V|+|E'|)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  finds if **Vertex v ∈ _V_** i.e. whether Vertex _V_ is in **_G_** or not.<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  and returns _amount of edges_ coming _**out of**_ Vertex _**V**_, returns _-1_ if **_V_** is not found.
  
 * _int inDegree(PGraph G, int VSize, PVertex V)_ - <br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 **_runtime: Θ(|V|+|E|)_**<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  finds if **Vertex v ∈ _V_** i.e. whether Vertex _V_ is in **_G_** or not.<br /> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  and returns _amount of edges_ coming _**into**_ Vertex _**V**_, returns _-1_ if **_V_** is not found.
