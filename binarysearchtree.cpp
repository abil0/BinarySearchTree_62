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
}
}
