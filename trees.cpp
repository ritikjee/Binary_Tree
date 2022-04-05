#include<iostream>
using namespace std;
class node{
    public:
    int data; // to store data of type int , other data too can be stored depending upon datatype.
    class node *left;
    class node *right;
    node(int n){
        data=n;
        left=NULL;
        right=NULL;
    }

};
int main(){
    class node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->left->left=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(4);
    cout<<root->left->left->data<<endl;
    cout<<root->left->right->data;
    return 0;

}