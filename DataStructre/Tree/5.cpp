
// Tree: Level Order Traversal
//! MỘT BÀI RẤT HAY VỀ ỨNG DỤNG CỦA DUEUE TRONG CÂY.

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

        void levelOrder(Node * root) {
            queue<Node*> q;
            q.push(root); // push địa chỉ của root vào cây
            
            while (!q.empty()) { // nên hàm này vẫn rỗng, vì nó không chứa bất kỳ phần tử nào trong hàm cả, nên hàm vẫn rỗng và while vẫn chạy.
                Node * root = q.front(); // khai báo root lưu trữ địa chỉ của phần tử đầu tiên lấy ra từ queue ban đầu.
                q.pop(); // xóa cái đại chỉ của biến đầu tiên khỏi root đó đi, để queue trở thành hàng đợi rỗng.
                
                cout << root->data << ' '; // in ra cái node đó
                
                if (root->left) q.push(root->left); // cho cái root đó tiến tới bên trái.
                
                if (root->right) q.push(root->right); // cho cái root đó tiến tới bên phải của hàm.
                
                // => mục đích để cho nó in ra hết node bên trái và node bên phải.
            }

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
  
	myTree.levelOrder(root);
    return 0;
}

