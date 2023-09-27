#include <bits/stdc++.h>
using namespace std;

struct CompleteBinaryTree {
    vector < int > data;
    int size;

    CompleteBinaryTree(const vector < int >& data) : size(data.size()), data(data) {}
    
    void print()
    {
        for ( int i = 0; i < size; i++ ) {
            cout << "node " << i + 1 << ": key = " << data[i] << ", ";
            if ( i > 0 ) cout << "parent key = " << data[(i - 1) / 2] << ", ";
            if ( i * 2 + 1 < size ) {
                cout << "left key = " << data[i * 2 + 1] << ", ";
                if ( i * 2 + 2 < size ) {
                    cout << "right key = " << data[i * 2 + 2] << ", ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int H;
    cin >> H;

    vector < int > data(H);
    
    for ( int i = 0; i < H; i++ ) {
        cin >> data[i];
    }

    CompleteBinaryTree tree(data);

    tree.print();
    
    return ( 0 );
}

