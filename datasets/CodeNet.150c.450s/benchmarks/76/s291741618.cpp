#include<iostream>
using namespace std;

class Node
{
    public:
        int key;
        Node* left;
        Node* right;
        Node* parent;
        Node( int k = 0 );
};

Node::Node( int k )
{
    key = k;
    parent = NULL;
    left = NULL;
    right = NULL;
}

class Tree
{
    private:
        Node* root;
    public:
        Tree();
        void Insert( Tree& t, int k );
        void PrintInorder( Tree t, Node* target );
        void PrintPreorder( Tree t, Node* target );
        bool Find( Tree t, int k );
};

Tree::Tree()
{
    root = NULL;
}

void Tree::Insert( Tree& t, int k )
{
    Node* y = NULL;
    Node* x = t.root;

    while( x != NULL )
    {
        y = x;
        if( k < x -> key )
            x = x -> left;
        else
            x = x -> right;
    }

    Node* n = new Node(k);
    n -> parent = y;

    if( y == NULL )
        t.root = n;
    else if( n -> key < y -> key )
        y -> left = n;
    else
        y -> right = n;
}

void Tree::PrintInorder( Tree t, Node* target )
{
    if( target == NULL )
        target = t.root;

    if( target -> left != NULL )
        PrintInorder( t, target -> left );
    
    cout << " " << target -> key;

    if( target -> right != NULL )
        PrintInorder( t, target -> right );
}

void Tree::PrintPreorder( Tree t, Node* target )
{
    if( target == NULL )
        target = t.root;

    cout << " " << target -> key;

    if( target -> left != NULL )
        PrintPreorder( t, target -> left );

    if( target -> right != NULL )
        PrintPreorder( t, target -> right );
}

bool Tree::Find( Tree t, int k )
{
    Node* target = t.root;

    bool judge = false;
    while( target != NULL )
    {
        if( target -> key < k )
            target = target -> right;
        else if( target -> key > k )
            target = target -> left;
        else
        {
            judge = true;
            break;
        }
    }
    return judge;
}

int main()
{
    int n, k;
    string s;
    Tree tree;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> s;
        if( s == "insert" )
        {
            cin >> k;
            tree.Insert( tree, k );
        }
        else if( s == "find" )
        {
            cin >> k;
            if( tree.Find( tree, k ) )
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
        {
            tree.PrintInorder( tree, NULL );
            cout << endl;
            tree.PrintPreorder( tree, NULL );
            cout << endl;
        }
    }



    return 0;
}
