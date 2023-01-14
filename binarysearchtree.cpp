#include <bits/stdc++.h>

using namespace std;

struct BSTnode{
    int data;
    struct BSTnode* left;
    struct BSTnode* right;
};

class binary_tree{
    private:
        BSTnode *left,*right,*root;
    public:
        binary_tree(){
            root=NULL;
            left=NULL;
            right=NULL;
        }

        void preordertraversal(BSTnode *root){
            if(root==NULL) return;

            cout << root->data << " -> ";

            preordertraversal(root->left);
            
            preordertraversal(root->right);
        }

        void postordertranversal(BSTnode *root){
            if(root==NULL) return;

            postordertranversal(root->left);
            
            postordertranversal(root->right);
            
            cout << root->data << " -> ";
        }

        void inordertraversal(BSTnode *root){
            if(root==NULL) return;

            inordertraversal(root->left);

            cout << root->data << " -> ";
            
            inordertraversal(root->right);
        }

        void insertion(BSTnode *root, int n){
            BSTnode *temp=new BSTnode;
            temp->data=n;
            temp->left=temp->right=NULL;
            if(root==NULL){
                root=temp;
            }else if(n>root->data){
                insertion(root->right,n);
            }else if(n<root->data){
                insertion(root->left,n);
            }
        }
};

int main(){
    binary_tree a;
    a.pushback(21);
    a.pushback(34);

    cout << a.size() << endl;

    a.popback(21);

    a.display();
}