#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
};

void mirror(Node* root)
{
    if(!root)
    return;
    Node* temp = root->left;
    Node* left = root->right;
    Node* right = temp;
    mirror(root->left);
    mirror(root->right);
}
int main()
{
   Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};
    root->right->left = new Node{6, nullptr, nullptr};
    root->right->right = new Node{7, nullptr, nullptr};
    mirror(root);
}