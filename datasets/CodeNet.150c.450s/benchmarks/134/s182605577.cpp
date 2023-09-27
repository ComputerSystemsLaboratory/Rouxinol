#include <cstdio>
#include <algorithm>

using namespace std;

#define null -1

struct node{

    int parent, left, right;

};

node T[30];

//preorder tree walk

void preorder( int u ){

    if( u == null ) return;

    printf(" %d", u);

    preorder( T[u].left );

    preorder( T[u].right );

}

//inorder tree walk

void inorder( int u ){

    if( u == null ) return;
    
    inorder( T[u].left );

    printf(" %d", u);

    inorder( T[u].right );

}

//postorder tree walk

void postorder( int u ){

    if( u == null ) return;
    
    postorder( T[u].left );

    postorder( T[u].right );

    printf(" %d", u);

}


int main(){

    int n, i, num, l, r,  root, v;

    scanf("%d", &n);

    for( i = 0; i < n; i++ ){

        T[i].left = null;
        T[i].right = null;
        T[i].parent = null;

    }

    for( i = 0; i < n; i++ ){

        scanf("%d", &num);

        scanf("%d %d", &l, &r);

        T[num].left = l;
        T[num].right = r;

        if( l != null && r != null ){

            T[l].parent = num;
            T[r].parent = num;

        } else if( l != null && r == null ){

            T[l].parent = num;

        } else if( r != null && l == null ){

            T[r].parent = num;

        } 

    }

    for( i = 0; i < n ; i++ ){

        if( T[i].parent == null ) root = i;

    }


    printf("Preorder\n");
    preorder( root );
    printf("\n");

    printf("Inorder\n");
    inorder( root );
    printf("\n");

    printf("Postorder\n");
    postorder( root );
    printf("\n");

}