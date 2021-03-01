#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

void printDataAfterNode(Node *node)
{
   std::cout << "check "<< (NULL == 0) << std::endl;
    while (node->link != NULL)
    {
        std::cout << node->data << std::endl;
        node = node->link;
    }
    std::cout << node->data << std::endl;
}

int main()
{

    // Node aNode;
    // int *ptr = &(aNode.data);
    // // std::cout << "aNode.data = " << aNode.data << std::endl;
    // std::cout << aNode.link << std::endl;

    // Node *aNode;        // aNode is a pointer to a node
    // aNode = new Node;   // create a node pointed by aNode
    // aNode->data = 3; // store data into the node
    // aNode->link = ptr; // set the link of the node to NULL

    // delete tempCar;
    Node *third = new Node;
    third->link = 0;
    third->data = 30;
    std::cout << (third -> link != NULL) << std::endl;

    Node *second = new Node;
    second->link = third;
    second->data = 20;

    Node *first = new Node; //實體化首節點
    first->link = second;   //指向null
    first->data = 10;

    printDataAfterNode(first);
   

    return 0;
}