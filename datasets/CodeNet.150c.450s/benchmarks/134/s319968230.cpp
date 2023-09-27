#include<iostream>

using namespace std;

#define MAX 25
#define NIL -1

struct Node 
{
    int parent, left, right;
};

Node T[MAX];

void preorder(int u)
{
    if(u == NIL)
        return;

    cout << " " << u ;
    preorder(T[u].left);
    preorder(T[u].right);
}

void inorder(int u)
{
    if(u == NIL)
        return;

    inorder(T[u].left);
    cout << " " << u ;
    inorder(T[u].right);
}

void postorder(int u)
{
    if(u == NIL)
        return;

    postorder(T[u].left);
    postorder(T[u].right);
    cout << " " << u ;
}

int depth(int i)
{
    int count = 0;
    int c = i;

    while(T[c].parent != NIL)
    {
        c = T[c].parent;
        count++;
    }

    return count;
}

int height(int i)
{
    if (T[i].left == NIL && T[i].right == NIL)
    {
        return 0;
    }

    int dl, dr;
    dl = dr = 0;

    if (T[i].left != NIL)
    {
        dl = height(T[i].left) + 1;
    }

   if (T[i].right != NIL)
    {
        dr = height(T[i].right) + 1;
    }

    return max(dl,dr);
}

int sibling(int i)
{
    if (T[i].parent == NIL)
    {
        return NIL;
    }
    else
    {
        int p = T[i].parent;

        if(T[p].left != NIL && T[p].right != NIL)
        {
            if (T[p].left == i)
            {
                return T[p].right;
            }
            else
            {
                return T[p].left;
            }
        }
    }

    return NIL;
}

int degree(int i)
{
    int count = 0;

    if (T[i].left != NIL)
    {
        count++;
    }

    if (T[i].right != NIL)
    {
        count++;
    }

    return count;
}

string nodeType(int i)
{
    if (T[i].parent == NIL)
    {
        return "root";
    }
    else if (T[i].left == NIL && T[i].right == NIL)
    {
        return "leaf";
    }
    else
    {
        return "internal node";
    }
}

void printNode(int i)
{
    cout << "node " << i << ": ";
    cout << "parent = " << T[i].parent << ", ";
    cout << "sibling = " << sibling(i) << ", ";
    cout << "degree = " << degree(i) << ", ";
    cout << "depth = " << depth(i) << ", ";
    cout << "height = " << height(i) << ", ";
    cout << nodeType(i);

    cout << endl;
}

int main ()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        T[i].parent = T[i].left = T[i].right = NIL;
    }

    for (int i = 0; i < N; i++)
    {
        int id;
        cin >> id;

        cin >> T[id].left;
        cin >> T[id].right;

        if (T[id].left != NIL)
        {
            T[T[id].left].parent = id;
        }

        if (T[id].right != NIL)
        {
            T[T[id].right].parent = id;
        }
    }

/*
    for (int i = 0; i < N; i++)
    {
        printNode(i);
    }
*/
    int root = 0;

    for (int i = 0; i < N; i++)
    {
       if(T[i].parent == NIL)
       {
           root = i;
           break;
       }
    }

    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;

    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;

    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;

    return 0;
}
