#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(int v);
        virtual ~Node();

        int GetValue();
        Node* GetNeighbor(int c);

        void SetNeighbor(int p, Node* n);

        void initArray(int c);

    private:
        Node** neighbors;
        int count;
        int value;
};

#endif // NODE_H
