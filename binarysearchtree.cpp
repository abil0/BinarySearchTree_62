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

    //step 7 : if the value in the data field of the new node is greater than tht of the parent 
    else if (x > parent->info)
    {
        //7a : make the right child of parent point to th enew node
        parent->rightchild = newnode;

        //7b : exit
        return;
    }
  }

void search(int element, node *&parent,  node *&currentnode)
{
   //this function searches the currentnode of the specified node as well as the current node of its parent
   currentnode = root;
   parent = nullptr;
   while ((currentnode != nullptr) && (currentnode->info != element))
   {
    parent = currentnode;
    if (element < currentnode->info)
       currentnode = currentnode->leftchild;
    else
       currentnode = currentnode->rightchild;
    
   }
   
}

bool isEmpty()
{
    //checks if the tree is empty
    return root ==nullptr;
}

void inorder(node *ptr)
{
    if (isEmpty())
    {
        cout << "tree is empty" << endl;
        return;
    }
    if (ptr == nullptr)
        return;

    inorder (ptr->leftchild);
    cout << ptr->info << " "; //parent
    inorder (ptr->rightchild);
}

void preorder(node *ptr)
{
    if (isEmpty())
    {
        cout << "tree is empty" << endl;
        return;
    }
    if (ptr == nullptr)
        return;

    cout << ptr->info << " "; //parent
    preorder (ptr->leftchild);
    preorder (ptr->rightchild);
}

void postorder(node *ptr)
{
    if (isEmpty())
    {
        cout << "tree is empty" << endl;
        return;
    }
    if (ptr == nullptr)
        return;

    postorder (ptr->leftchild);
    postorder (ptr->rightchild);
    cout << ptr->info << " "; //parent

}


};

int main()
{
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

              char ch;
        cin >> ch;
        cout << endl;

           switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
           case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
       
        }
    }
}
