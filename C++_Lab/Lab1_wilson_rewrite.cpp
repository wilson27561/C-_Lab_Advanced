#include <iostream>
#include <fstream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};
vector<int> fileNumber;

void createList(ifstream &, Node **);
void deleteElements(ifstream &, Node **);
bool searchLinkedList(Node *, int, Node **, Node **);
void insertLinkedList(Node **, int);
//split by space return vector
vector<int> splitSpace(string, vector<int>);
void reverseNode(Node *node);

void printDataAfterNode(Node *node)
{
    while (node->link != NULL)
    {
        std::cout << node->data << " ";
        node = node->link;
    }
    std::cout << node->data << endl;
}

int main()
{
    //first part
    // create a sorted linked-list
    // no duplicate numbers in the linked-list
    // are sorted in the descending order in the linked-list.
    // get unsorted originally in a file, file name from keyboard
    ifstream fstream("Lab1rawData.txt");
    Node *node = new Node;
    createList(fstream, &node);
    //記錄第一個node的位置
    //=========== 這段之後改掉 ===========
    Node *first = new Node;
    first->link = node;
    //=========== 這段之後改掉 ===========
    for (int i = 1; i < (fileNumber.size()); i++)
    {
        insertLinkedList(&node, fileNumber[i]);
    }

    printDataAfterNode(first->link);

    //second part
    //delete some elements from the linked-list
    //The data to be deleted are first read from a file
    //If an integer read from the file can be found in the linked-list, the node that stores the integer should be deleted. If it is not found, nothing has to be done

    return 0;
}

void createList(ifstream &ftr, Node **node)
{

    string fileContent;
    while (getline(ftr, fileContent))
    {
        fileNumber = splitSpace(fileContent, fileNumber);
    }
    (*node)->data = fileNumber[0];
    (*node)->link = NULL;
}

void insertLinkedList(Node **node, int number)
{
    Node *tempNode = new Node;
    tempNode->link = (*node);
    while (tempNode->link != NULL)
    {
        tempNode = tempNode->link;
        if(tempNode->data > number){

        }else if (tempNode->data < number)
        {
            
        }


    }
    Node *insertNode = new Node;
    insertNode->data = number;
    insertNode->link = NULL;
    tempNode->link = insertNode;

    // while ((*node)->link != NULL)
    // {
    //     (*node) = (*node)->link;
    // }
    // Node *insertNode = new Node;
    // insertNode->data = number;
    // insertNode->link = NULL;
    // (*node)->link = insertNode;
}

//split by space return vector
vector<int> splitSpace(string fileContent, vector<int> fileNumber)
{
    stringstream contentArray(fileContent);
    while (contentArray.good())
    {
        string strcontent;
        contentArray >> strcontent;
        fileNumber.insert(fileNumber.begin(), atoi(strcontent.c_str()));
    }
    return fileNumber;
}