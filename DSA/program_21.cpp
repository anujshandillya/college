#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right; 
};
struct Node* createNode(int data){
    struct Node* newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct Node* preorder(struct Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
struct Node* postorder(struct Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

/*             
           Let the BST be:
                5
               / \
              3   6
             / \   
            1   4
*/

int main(){
    Node* root=createNode(5);
    Node* first=createNode(3);
    Node* second=createNode(6);
    Node* third=createNode(1);
    Node* fourth=createNode(4);

    // Linking
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=fourth;

    // inorder traversal
    cout<<"Inorder traversal:";
    inorder(root);
    cout<<endl;

    // preorder traversal
    cout<<"preorder traversal:";
    preorder(root);
    cout<<endl;

    // postorder traversal
    cout<<"postorder traversal:";
    postorder(root);
    cout<<endl;

    return 0;
}
