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
    
    //step 4: locate the node which will be the parent of the new node to be inserted
    node *parent = nullptr;
    node *currentnode = nullptr;
    search(x, parent,currentnode);

    //step 5: if parent is null (tree is empty)
    if (parent == nullptr)
    {
        //5a :mark the new node as root
        root = newnode;

        //5b : exit
        return;
    }
    
    //step 6: if the value in the data field of new node is less then tht of parent
    if (x < parent ->info)
    {
        //6a : make the left child of parent point to the new node
        parent->leftchild = newnode;

        //6b : exit
        return;
    }
    
    
}
}
