#ifndef BINARYTREE_H
#define BINARYTREE_H 

#include <string>

using namespace std;

/**
 * Binary Tree
 */

class BinaryTree
{
	struct node {
		string data;
		int size;
		node *left;
		node *right;
	};

	public:
		BinaryTree();
		~BinaryTree();

		void insert(string key);
		node *search(string key);
		void printTreeByBreadth();
		int size();
		void delete_tree();
	
	private:
		void delete_tree(node *leaf);
		void printTreeByBreadth(node *leaf);
		void insert(string key, node *leaf);
		node *search(string key, node *leaf);
		int size(node *leaf);

		node *root;
};
#endif /* ifndef BINARYTREE_H */
