#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* right;
	struct Node* left;
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};
int main(void){
	struct Node* root= new Node(1);

	root->right = new Node(2);
	root->left = new Node(3);

	root->right->right = new Node(4);
	root->right->left = new Node(5);

	root->left->left = new Node(6);
	root->left->right = new Node(7);

	
	return 0;
}
