// //Q:1 Construct a C++ program to insert nodes into a Binary Search Tree. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* left;    Node* right;
// };
// Node* insert(Node* root, int value) {
//     if (root == NULL) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->left = newNode->right = NULL;    return newNode;
//     }
//     if (value < root->data)    root->left = insert(root->left, value);
//     else    root->right = insert(root->right, value);
// return root;
// }
// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }int main() {
//     Node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);    insert(root, 70);
//     insert(root, 20);    insert(root, 40);
//     cout << "Inorder Traversal: ";    inorder(root);
//     return 0;
// }


// //Q:2 Implement a program to search for an element in a BST 
// //and display whether it is found or not. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* left;    Node* right;
// };
// Node* insert(Node* root, int value) {
//     if (root == NULL) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->left = newNode->right = NULL;    return newNode;
//     }
//     if (value < root->data)    root->left = insert(root->left, value);
//     else    root->right = insert(root->right, value);
// return root;
// }
// bool search(Node* root, int key) {
//     if (root == NULL)    return false;
//     if (root->data == key)    return true;
//     else if (key < root->data)    return search(root->left, key);
//     else    return search(root->right, key);
// }
// int main() {
//     Node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);    insert(root, 70);
//     insert(root, 20);    insert(root, 40);
//     int key; cout<<"Enter element to search : ";  cin>>key;
//     if (search(root, key))    cout << "Element found in BST";
//     else    cout << "Element not found in BST";
//     return 0;
// }



// //Q:3 Develop a program to delete a leaf node from a BST. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };
// // Insert node
// Node* insert(Node* root, int value) {
//     if (root == NULL) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->left = newNode->right = NULL;
//         return newNode;
//     }
//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else
//         root->right = insert(root->right, value);
//     return root;
// }
// // Delete leaf node
// Node* deleteLeaf(Node* root, int key) {
//     if (root == NULL)
//         return NULL;
//     // If node found and it is a leaf
//     if (root->data == key && root->left == NULL && root->right == NULL) {
//         delete root;
//         return NULL;
//     }
//     if (key < root->data)
//         root->left = deleteLeaf(root->left, key);
//     else if (key > root->data)
//         root->right = deleteLeaf(root->right, key);
//     return root;
// }
// // Inorder traversal
// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }
// int main() {
//     Node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 70);
//     insert(root, 20);
//     insert(root, 40);
//     cout << "Before Deletion: ";
//     inorder(root);
//     root = deleteLeaf(root, 20);   // 20 is a leaf node
//     cout << "\nAfter Deletion: ";
//     inorder(root);
//     return 0;
// }


// //Q:4 Extend the deletion program to delete a node with one child. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };
// // Insert node
// Node* insert(Node* root, int value) {
//     if (root == NULL) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->left = newNode->right = NULL;
//         return newNode;
//     }
//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else
//         root->right = insert(root->right, value);
//     return root;
// }
// // Delete node with one child or leaf
// Node* deleteNode(Node* root, int key) {
//     if (root == NULL)
//         return NULL;
//     if (key < root->data)
//         root->left = deleteNode(root->left, key);
//     else if (key > root->data)
//         root->right = deleteNode(root->right, key);
//     else {
//         // Case 1: Leaf node
//         if (root->left == NULL && root->right == NULL) {
//             delete root;
//             return NULL;
//         }
//         // Case 2: One child
//         else if (root->left == NULL) {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if (root->right == NULL) {
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//     }
//     return root;
// }
// // Inorder traversal
// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }
// int main() {
//     Node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 70);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 35);   // Node with one child (40 has left child 35)
//     cout << "Before Deletion: ";
//     inorder(root);
//     root = deleteNode(root, 40);   // deleting node with one child
//     cout << "\nAfter Deletion: ";
//     inorder(root);
//     return 0;
// }



// //Q:5 Extend the deletion program to delete a node with 
// //two children (using inorder successor/predecessor). 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* left = nullptr;    Node* right = nullptr;
// };
// Node* insert(Node* root, int val) {
//     if (!root) return new Node{val};
//     if (val < root->data) root->left = insert(root->left, val);
//     else root->right = insert(root->right, val);    return root;
// }Node* minNode(Node* root) {
//     while (root->left) root = root->left;    return root;
// }Node* deleteNode(Node* root, int key) {
//     if (!root) return nullptr;
//     if (key < root->data) root->left = deleteNode(root->left, key);
//     else if (key > root->data) root->right = deleteNode(root->right, key);
//     else {
//         if (!root->left) return root->right;
//         if (!root->right) return root->left;
//         Node* temp = minNode(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data);
//     }    return root;
// }void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }int main() {
//     Node* root = nullptr;
//     int arr[] = {50,30,70,20,40,60,80};
//     for (int x : arr) root = insert(root, x);
//     cout << "Before Deletion: "; inorder(root);
//     root = deleteNode(root, 50);
//     cout << "\nAfter Deletion: "; inorder(root);
//     return 0;
// }



// //Q:6 Implement and display BST traversals: inorder, preorder, postorder. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* left = nullptr;    Node* right = nullptr;
// };
// Node* insert(Node* root, int val) {
//     if (!root) return new Node{val};
//     if (val < root->data) root->left = insert(root->left, val);
//     else root->right = insert(root->right, val);
//     return root;
// }void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }void preorder(Node* root) {
//     if (!root) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }void postorder(Node* root) {
//     if (!root) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }
// int main() {
//     Node* root = nullptr;
//     int arr[] = {50, 30, 70, 20, 40, 60, 80};
//     for (int x : arr) root = insert(root, x);
//     cout << "Inorder: "; inorder(root); cout << endl;
//     cout << "Preorder: "; preorder(root); cout << endl;
//     cout << "Postorder: "; postorder(root); cout << endl;
//     return 0;
// }


// //Q:7 Write a program to count the number of nodes in a BST and determine the tree height. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* left = nullptr;    Node* right = nullptr;
// };
// Node* insert(Node* root, int val) {
//     if (!root) return new Node{val};
//     if (val < root->data) root->left = insert(root->left, val);
//     else root->right = insert(root->right, val);    return root;
// }int countNodes(Node* root) {
//     if (!root) return 0;
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }int height(Node* root) {
//     if (!root) return 0;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return 1 + (lh > rh ? lh : rh);
// }
// int main() {
//     Node* root = nullptr;
//     int arr[] = {50, 30, 70, 20, 40, 60, 80};
//     for (int x : arr) root = insert(root, x);
//     cout << "Number of nodes: " << countNodes(root) << endl;
//     cout << "Height of BST: " << height(root) << endl;
//     return 0;
// }



//Q:8 Develop a program to find the minimum and maximum value in a BST. 
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};
Node* insert(Node* root, int val) {
    if (!root) return new Node{val};
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
int findMin(Node* root) {
    while (root->left) root = root->left;
    return root->data;
}
int findMax(Node* root) {
    while (root->right) root = root->right;
    return root->data;
}
int main() {
    Node* root = nullptr;
    int arr[] = {50, 30, 70, 20, 40, 60, 80};
    for (int x : arr) root = insert(root, x);
    cout << "Minimum value in BST: " << findMin(root) << endl;
    cout << "Maximum value in BST: " << findMax(root) << endl;
    return 0;
}



