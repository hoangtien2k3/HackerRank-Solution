
// Tree: Level Order Traversal
//! MỘT BÀI RẤT HAY VỀ ỨNG DỤNG CỦA DUEUE TRONG CÂY.

include <bits/stdc++.h>	

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


        //! in ra các nốt từ trái sang phải của cây nhị phân (dùng Dueue để thêm phần tử vào đầu và lấy ra phần tử ở vị trí đầu danh sách).
        void levelOrder(Node * root) {
            queue<Node*> q;
            q.push(root);
            
            while (!q.empty()) {
                Node* root = q.front(); // gán root bằng phần tử đầu cây bằng dueue
                q.pop(); // xóa phân tử ở đầu đi
                cout << root->data << ' ';
                if (root->left) q.push(root->left); // đệ quy sang bên trái cây
                if (root->right) q.push(root->right); // đệ quy sang bên phải của cây
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
