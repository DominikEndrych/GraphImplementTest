#include "Graph.h"
#include "Node.h"

using namespace std;

Graph::Graph(int n)
{
    this->nodes = new Node*[n];

    this->count = n;
}

/*void Graph::insert(Node* n)
{
    this->nodes[0] = n;
}*/

void Graph::insert(Node* n, int c, Node** newNeighbors)
{
    int nodePos = 8 - this->count;      //dopøedu vím, že pracuji pouze s 8 prvky

    this->nodes[nodePos] = n;

    this->nodes[nodePos]->initArray(c);

    for(int i = 0; i < c; i++)
    {
        this->nodes[nodePos]->SetNeighbor(i,newNeighbors[i]);
    }

    this->count--;
}

Node* Graph::GetNode(int n)
{
    return this->nodes[n];
}

Graph::~Graph()
{
    delete this->nodes;
    this->nodes = nullptr;
}
