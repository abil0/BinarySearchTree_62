#include <iostream>
using namespace std;

class node
{
public:
     int info;
     node*leftchild;
     node*rightchild;

     //constuctor for the node class
     node()
     {
        leftchild = nullptr; //initialize left child to null
        rightchild = nullptr; //initialize right child to null
     }
};
class binarytree
{
public:
    node*root;

    binarytree()

    {
        root = nullptr; //initializing root to null
    }
void insert()
{
    int x;
    cout << "masukkan nilai: " ;
    cin >> x;

    //step 1 : allocate memory for the new node
    node *newnode = new node();

    //step 2 : assign value to the data field of new node 
    newnode->info = x;

    //step 3 : make the left and right child of the new node point to null
    newnode->leftchild = nullptr;
    newnode->rightchild = nullptr;
}
}
