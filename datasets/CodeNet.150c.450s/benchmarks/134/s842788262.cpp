#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

class tree{
public:
    void putparent(int n);
    void putleft(int n);
    void putright(int n);
    int getparent();
    string gettype();
    int getleft();
    int getright();
    int getdegree();
    tree();
private:
    int parent;
    int left;
    int right;
};

typedef struct tree Tree;

tree::tree()
{
    parent = -1;
    left = -1;
    right = -1;
}

void tree::putparent(int n)
{
    parent = n;
    return;
}

void tree::putleft(int n)
{
    left = n;
    return;
}

void tree::putright(int n)
{
    right = n;
    return;
}

int tree::getparent()
{
    return parent;
}

string tree::gettype()
{
    if(getparent() == -1) return "root";
    else if(getleft() == -1 && getright() == -1) return "leaf";
    else return "internal node";
}

int tree::getleft()
{
    return left;
}

int tree::getright()
{
    return right;
}

void preorder(Tree a[], int n)
{
    cout << " " << n;
    if(a[n].getleft() != -1) preorder(a, a[n].getleft());
    if(a[n].getright() != -1) preorder(a, a[n].getright());
    return;
}

void inorder(Tree a[], int n)
{
    if(n == -1) return;
    inorder(a, a[n].getleft());
    cout << " " << n;
    inorder(a, a[n].getright());
}

void postorder(Tree a[], int n)
{
    if(n == -1) return;
    postorder(a, a[n].getleft());
    postorder(a, a[n].getright());
    cout << " " << n;
}

int getroot(Tree a[], int n)
{
    if(a[n].getparent() == -1) return n;
    else return getroot(a, a[n].getparent());
}



int main()
{
    int n;
    cin >> n;
    Tree t[25];
    int id, l, r;
    for(int i = 0; i < n; i++){
        cin >> id >> l >> r;
        t[id].putleft(l);
        t[id].putright(r);
        if(l != -1) t[l].putparent(id);
        if(r != -1) t[r].putparent(id);
    }
    int root = getroot(t, 0);
    cout << "Preorder" << endl;
    preorder(t, root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(t, root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(t, root);
    cout << endl;
    return 0;
}