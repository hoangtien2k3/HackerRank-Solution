
// Binary Search Tree : Insertion
// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

    Node * insert(Node * root, int data) {
        if (root == NULL) {
            Node *newNode = new Node(data);
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->data = data;
            return newNode;
        } else {
            if (data  < root->data) {
                root->left = insert(root->left, data);
            } else if (data > root->data) {
                root->right = insert(root->right, data);
            }
        }
        return root;
    }
    
    
};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}



