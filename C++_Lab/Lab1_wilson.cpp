#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};

void createList(ifstream &, Node **);
void deleteElements(ifstream &, Node **);
bool searchLinkedList(Node *, int, Node **, Node **);
void insertLinkedList(Node **, vector<int>);
//readfile to vector
vector<int> readfile(string);
//split by space return vector
vector<int> splitSpace(string, vector<int>);

void printDataAfterNode(Node *node)
{
    int k = 0;
    while (node->link != NULL)
    {
        std::cout << node->data << std::endl;
        node = node->link;
        k++;
        if (k > 20)
        {
            break;
        }
    }
    std::cout << node->data << std::endl;
}

int main()
{
    //first part
    // create a sorted linked-list
    // no duplicate numbers in the linked-list
    // are sorted in the descending order in the linked-list.
    // get unsorted originally in a file, file name from keyboard

    vector<int> fileNumber = readfile("Lab1rawData.txt");
    Node *node = new Node;

    //second part
    //delete some elements from the linked-list
    //The data to be deleted are first read from a file
    //If an integer read from the file can be found in the linked-list, the node that stores the integer should be deleted. If it is not found, nothing has to be done

    return 0;
}

void insertLinkedList(Node **node, vector<int> fileNumber)
{
    // std::cout << "insert" << (*node) -> data << std::endl;
    //  std::cout << "bool" << (*node) -> link << std::endl;
    //    std::cout << "bool" << (*node) -> data << std::endl;
    for (int i = 0; i < fileNumber.size(); i++)
    {
        if (i == 0)
        { 
            (*node) -> data  = fileNumber[i];
            *node = NULL;
        }
        else
        {
           while ((*node) -> link  != NULL)
           {
            
           }
        }
    }
}

vector<int> readfile(string name)
{
    vector<int> fileNumber;
    ifstream ftr(name);
    string fileContent;
    while (getline(ftr, fileContent))
    {
        fileNumber = splitSpace(fileContent, fileNumber);
    }

    return fileNumber;
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