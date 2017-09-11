#include "BinaryTree.h"
#include <stdio.h>
#include <queue>
#include <list>

using namespace std;

BinaryTree::BinaryTree(){
	root = NULL;
}

BinaryTree::~BinaryTree(){
	delete_tree();
}

void BinaryTree::delete_tree(){
	delete_tree(root);
}

void BinaryTree::delete_tree(node *leaf){
	if(leaf != NULL){
		delete_tree(leaf->left);
		delete_tree(leaf->right);
		delete leaf;
	}
}

void BinaryTree::insert(string key){
	if (root != NULL){
		insert(key,root);
	}
	else{
		root = new node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;
		root->size = 1;
	}
}

void BinaryTree::insert(string key, node *leaf){
	leaf->size++; // assumes insert happens
	if (key.compare(leaf->data) < 0){
		if (leaf->left != NULL){
			insert(key, leaf->left);
		}
		else{
			leaf->left = new node;
			leaf->left->data = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
			leaf->left->size = 1;
		}
	}
	else{
		if(leaf->right != NULL){
			insert(key, leaf->right);
		}
		else{
			leaf->right = new node;
			leaf->right->data = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
			leaf->right->size = 1;
		}
	}
}

int BinaryTree::size(){
	return size(root);
}

int BinaryTree::size(node *leaf){
	return leaf->size;
}

BinaryTree::node* BinaryTree::search(string key){
	return search(key, root);
}

BinaryTree::node* BinaryTree::search(string key, node* leaf){
	if (leaf == NULL) return NULL;
	if (leaf->data.compare(key) == 0) return leaf;
	if (key.compare(leaf->data) < 0){
		if (leaf->left == NULL) return NULL;
		else                    return search(key, leaf->left);
	}
	else{
		if (leaf->right == NULL) return NULL;
		else                     return search(key, leaf->right);
	}
}

void BinaryTree::printTreeByBreadth(){
	printTreeByBreadth(root);
}

void BinaryTree::printTreeByBreadth(node *leaf){
	queue<node*>  q;
	q.push(leaf);

	while (!q.empty()) {
		 node *current = q.front();
		 q.pop();
		 printf("%s \t %i \n", current->data.c_str(),  current->size); 
		 if(current->left != NULL)  q.push(current->left);
		 if(current->right != NULL) q.push(current->right);
	}
	
}
