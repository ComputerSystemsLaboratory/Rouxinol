/*
 * Problem Description: Heaps - Complete Binary Tree
 * Category:
 * Author: Khan
 * Date: 17th October, 2017
 */

#include <iostream>
#define MAXN 100000

using namespace std;

int parent(int i) {return i / 2;}
int leftChild(int i) {return i * 2;}
int rightChild(int i) {return i * 2 + 1;}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int H, A[MAXN + 1];
    cin >> H;
    for (int i = 1; i <= H; ++i)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= H; ++i)
    {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if(parent(i) >= 1)
            cout << "parent key = " << A[parent(i)] << ", ";
        if(leftChild(i) <= H)
            cout << "left key = " << A[leftChild(i)] << ", ";
        if(rightChild(i) <= H)
            cout << "right key = " << A[rightChild(i)] << ", ";
        cout << endl;
    }
}