
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};
/*
 * 
 */
//NIL mean null
Node *root, *NIL;


void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node *)malloc(sizeof(Node));
    z -> key = key;
    z -> left = NIL;
    z -> right = NIL;
    
    while(x != NIL) {
        y = x;
        if(x -> key < key) {
            //??????
            x = x -> right;
        }
        else {
            //??????
            x =  x -> left;
        }
    }
    
    z -> parent = y;
    if(y == NIL) {
        root = z;
    }
    else if(y -> key < key) {
        y -> right = z;
    }
    else {
        y -> left = z;
    }
}


bool find(int key) {
    Node *node = root;
    while(node != NIL) {
        if(node -> key == key) {
            cout << "yes" << endl;
            return true;
        }
        else if(node -> key < key) {
            //??????
            node = node -> right;
        }
        else if(node -> key > key){
            //??????
            node = node -> left;
        }

    }
    cout << "no" << endl;
    return false;
}

void printInOrder(Node *node) {
    if(node == NIL) {
        return;
    }
    printInOrder(node -> left);
    cout << " " << node -> key;
    printInOrder(node -> right);
}

void printPreOrder(Node *node) {
    if(node == NIL) {
        return;
    }
    cout << " " << node -> key;
    printPreOrder(node -> left);
    printPreOrder(node -> right);
}

void releaseTree(Node *node) {
    if(node == NIL) {
        return;
    }
    releaseTree(node -> left);
    releaseTree(node -> right);
    free(node);
}
int main(void) {
    //ifstream ifs;
    //ifs.open("./input.txt", ifstream::in);
    
    int num, key;
    string command;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> command;
        if(command[0] == 'i') {
            cin >> key;
            insert(key);
        }
        else if(command[0] == 'p') {
            printInOrder(root);
            cout << endl;
            printPreOrder(root);
            cout << endl;
        }
        else if(command[0] == 'f') {
            cin >> key;
            find(key);
        }
    }
    
    releaseTree(root);
   
    return 0;
}