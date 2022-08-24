
// Tree : Top View
// https://www.hackerrank.com/challenges/tree-top-view/problem?isFullScreen=true

#include<bits/stdc++.h>

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
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
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

*/

    void topView(Node * root) {
        queue<pair<int, Node*>> q; 
        q.push(make_pair(0, root));
        map<int,Node*> ans;
        for(auto i=q.front(); !q.empty(); q.pop(), i=q.front()){
            if(!i.second) continue;
            ans.insert(i);
            q.push(make_pair(i.first+1,i.second->right));
            q.push(make_pair(i.first-1,i.second->left));
        }
        for(auto i : ans) cout << i.second->data << " ";
    }
    

}; //End of Solution

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
  
	myTree.topView(root);
    return 0;
}


