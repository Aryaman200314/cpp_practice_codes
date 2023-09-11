// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
   
class node {
	public:
		int data;
		node*left;
		node*right;
		
		node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}	
};

node* build() {
	int d;
	cin>>d;
	
	if(d==-1) {
		return NULL;
	}
	node* root = new node(d);
	root->left = build();
	root->right = build();
	return root;
}

int Leaves(node* root) {
	if(!root)
 	{
 		return 0;
	}
	if(!root->left && !root->right) {
		return 1;
	}
			
	return Leaves(root->left)+Leaves(root->right);

}

int main() {
	node* root = build();
	int count = Leaves(root);
	cout<<count<<endl;
}