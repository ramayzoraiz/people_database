#pragma once

#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include<iostream>
#include"persons.h"
using namespace std;

struct BTNode                                   //Node for Binary search tree
{
	person data;
	BTNode* left;
	BTNode* right;
};


class BinaryTree
{
private:
	BTNode *root;
public:
	BinaryTree() : root(NULL){};                                   // Default Constructor

	~BinaryTree(){};                                               // Default Destructor

	BTNode* GetNewNode(person indata)                                  // Function to create a new Node
	{
		BTNode* newNode = new BTNode();
		newNode->data = indata;
		newNode->left = newNode->right = NULL;
		return newNode;
	}
	 
	BTNode* temporary_node = root;
	void Insert(person indata)                    // To insert data in BinaryTree
	{
		if(root==NULL)
		{
			root = GetNewNode(indata);
			temporary_node = root;
		}
		else if (temporary_node == NULL)
		{ 
			temporary_node = GetNewNode(indata);
		} 
		else if (indata.compare_names((temporary_node->data).full_name))                       // if name to be inserted is alphabetically lesser, insert in left subtree.
		{
			temporary_node = temporary_node->left;
			Insert(indata);
			root->left = temporary_node;
		} 
		else                                                                           // insert in right subtree.
		{
			temporary_node = temporary_node->right;
			Insert(indata);
			root->right = temporary_node;
		}
	}

	void show_root()
	{
		cout << (root->data).full_name;
	}

};

#endif                      //BINARY-SEARCH-TREE