#include "Node.h"

Node::Node()
{
    this->neighbors = nullptr;
    this->count = 0;
    this->value = -1;
}

Node::Node(int v)
{
    this->neighbors = nullptr;
    this->count = 0;
    this->value = v;
}

int Node::GetValue()
{
    return this->value;
}

Node* Node::GetNeighbor(int c)
{
    return this->neighbors[c];
}

void Node::initArray(int c)
{
    this->neighbors = new Node*[c];
}

void Node::SetNeighbor(int p, Node* n)
{
    this->neighbors[p] = n;
}

Node::~Node()
{
    delete this->neighbors;
    this->neighbors = nullptr;
}
