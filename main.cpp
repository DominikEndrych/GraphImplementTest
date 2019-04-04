#include <iostream>
#include "Node.h"
#include "Graph.h"

using namespace std;

int main()
{
    Node* n1 = new Node(0);
    Node* n2 = new Node(1);
    Node* n3 = new Node(2);

    Graph g1(8);

    Node** neighbors = new Node*[2];

    neighbors[0] = n2;
    neighbors[1] = n3;
    g1.insert(n1, 2, neighbors);

    neighbors[0] = n1;
    g1.insert(n2, 2, neighbors);

    neighbors[1] = n2;
    g1.insert(n3, 1, neighbors);

    cout << g1.GetNode(0)->GetValue() << endl;
    cout << g1.GetNode(1)->GetValue() << endl;

    cout <<g1.GetNode(1)->GetNeighbor(0)->GetValue() << endl;
    cout <<g1.GetNode(2)->GetNeighbor(0)->GetNeighbor(1)->GetValue() << endl;


    cout << "Hello world!" << endl;
    return 0;
}
