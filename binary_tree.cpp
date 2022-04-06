// preOrder transvarsel

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    class Node*right;
    class Node*left;
    Node(int n){
        data=n;
        left=right=NULL;

    }
      
    
    
};
void preOrder(class Node* node){
      
      if (node!=NULL)
      {
         cout << node->data << " ";
 
    /* then recur on left subtree */
    preOrder(node->left);
 
    /* now recur on right subtree */
    preOrder(node->right);
      }

    }
void postOrder(class Node* node){
      
      if (node!=NULL)
      {
 
    /* then recur on left subtree */
    postOrder(node->left);
 
    /* now recur on right subtree */
    postOrder(node->right);
         cout << node->data << " ";
      }

    }
void inOrder(class Node* node){
      
      if (node!=NULL)
      {
 
    /* then recur on left subtree */
    inOrder(node->left);
 
    /* now recur on right subtree */
    inOrder(node->right);
         cout << node->data << " ";
      }

    }
int main(){
    /*create root*/
    class Node* root = new Node(1);
    /* following is the tree after above statement
 
             1
            / \
          NULL NULL
    */
 
    root->left = new Node(2);
    root->right = new Node(3);
    /* 2 and 3 become left and right children of 1
                    1
                  /    \
                 2       3 
               /  \     /  \
            NULL NULL  NULL NULL
    */
 
    root->left->left = new Node(4);
    /* 4 becomes left child of 2
               1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL
    */

   cout << "\nPreorder traversal of binary tree is \n";
    preOrder(root);
   cout << "\nPostorder traversal of binary tree is \n";
    postOrder(root);
   cout << "\nInorder traversal of binary tree is \n";
    inOrder(root);
    return 0;
    /*
      OUTPUT:::::
      Preorder traversal of binary tree is 
      1 2 4 3 
      Postorder traversal of binary tree is 
      4 2 3 1 
      Inorder traversal of binary tree is 
      4 2 3 1 
      

    */
}