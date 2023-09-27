#include <iostream>
#include <string>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode -> key = key;
    newnode -> parent = NIL;
    newnode -> left = NIL;
    newnode -> right = NIL;

    Node *x = root;
    Node *y = NIL;

    while (x != NIL)
    {
        y = x;

        if (x -> key >= newnode -> key)
        {
            x = x -> left;
        }
        else
        {
            x = x -> right;
        }
    }

    newnode -> parent = y;

    if (y == NIL)
    {
        root = newnode;
    }
    else
    {
        if (y -> key >= newnode -> key)
        {
            y -> left = newnode;
        }
        else
        {
            y -> right = newnode;
        }
    }
}

bool find(int key)
{
    Node *x = root;
    Node *y = NIL;

    while (x != NIL)
    {
        if (x -> key == key)
        {
            return true;
        }
        else if (x -> key > key)
        {
            x = x -> left;
        }
        else
        {
            x = x -> right;
        }
    }
    return false;
}

void preParse(Node *u)
{
    if (u == NIL) return;
    cout << " " << u -> key;
    preParse(u -> left);
    preParse(u -> right); 
}

void inParse(Node *u)
{
    if (u == NIL) return;
    inParse(u -> left);
    cout << " " << u -> key;
    inParse(u -> right); 
}

int main()
{
    int m, key;
    string command;

    cin >> m;

    for (int i = 0; i != m; ++i)
    {
        cin >> command;

        if (command == "insert")
        {
            cin >> key;
            insert(key);
        }
        else if(command == "find")
        {
            cin >> key;
            if (find(key))
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
            
        }
        else if (command == "print")
        {
            inParse(root);
            cout << endl;
            preParse(root);
            cout << endl;
        }
    }

    return 0;
}

