/* 
 * File:   main.cpp
 * Author: masa
 *
 * Created on 2016/03/12, 7:31
 */

#include <cstdlib>
#include <string>
//#include <fstream>
#include <iostream>

using namespace std;


#define MAX 26
#define NIL -1

struct Node {
    int parent;
    int left;
    int right;
};

Node treeNodes[MAX];

/*
 * 
 */

void printPreOrder(int id) {
    cout << " " << id;
    
    if(treeNodes[id].left != NIL) {
        printPreOrder(treeNodes[id].left);
    }
    if(treeNodes[id].right != NIL) {
        printPreOrder(treeNodes[id].right);
    }
}

void printInOrder(int id) {
    if(treeNodes[id].left != NIL) {
        printInOrder(treeNodes[id].left);
    }
    
    cout << " " << id;
    
    if(treeNodes[id].right != NIL) {
        printInOrder(treeNodes[id].right);
    }
}

void printPostOrder(int id) {
    if(treeNodes[id].left != NIL) {
        printPostOrder(treeNodes[id].left);
    }
    if(treeNodes[id].right != NIL) {
        printPostOrder(treeNodes[id].right);
    }
    cout << " " << id;
}

int main(void) {
    
    //ifstream ifs;
    int num;
    
    //ifs.open("./input.txt", ios::in);
    
    //ifs >> num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        treeNodes[i].parent = treeNodes[i].left = treeNodes[i].right = NIL;
    }
    
    int id, child;
    for(int i = 0; i < num; i++) {
    //    ifs >> id;
        cin >> id;
        for(int j = 0; j < 2; j++) {
            //ifs >> child;
            cin >> child;
            if(j == 0) {
                treeNodes[id].left = child;
            }
            else {
                treeNodes[id].right = child;
            }
            if(child != NIL) {
                treeNodes[child].parent = id;
            }
        }
    }
    
    int rootId;
    for(int i = 0; i < num; i++) {
        if(treeNodes[i].parent == NIL) {
            rootId = i;
        }

    }
    cout << "Preorder" << endl;
    printPreOrder(rootId);
    cout << endl;
    
    cout << "Inorder" << endl;
    printInOrder(rootId);
    cout << endl;
    
    cout << "Postorder" << endl;
    printPostOrder(rootId);
    cout << endl;
    
    return 0;
}