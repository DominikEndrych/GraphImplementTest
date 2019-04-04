#ifndef GRAPH_H
#define GRAPH_H
#include "Node.h"


class Graph
{
    public:
        Graph(int n);
        virtual ~Graph();

        void insert(Node*);
        void insert(Node* n, int c, Node** neighbors);

        Node* GetNode(int n);

    private:
        Node** nodes;
        int count;
};

#endif // GRAPH_H
