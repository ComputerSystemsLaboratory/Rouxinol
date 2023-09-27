#include<iostream>
using namespace std;
#include<stdlib.h>

int *L, *R;  // left(child), right(child).

void preorder(int i)
{
    if(i < 0) return;
    cout << " " << i;
    preorder(L[i]);
    preorder(R[i]);
}

void inorder(int i)
{
    if(i < 0) return;
    inorder(L[i]);
    cout << " " << i;
    inorder(R[i]);
}

void postorder(int i)
{
    if(i < 0) return;
    postorder(L[i]);
    postorder(R[i]);
    cout << " " << i;
}

int main()
{
    int *P;  // parent.
    int i, n, l, r;
    cin >> n;
    P = new int [n]; L = new int [n]; R = new int [n];
    if(P == NULL || L == NULL || R == NULL) exit(EXIT_FAILURE);

    // initialize.
    for(i = 0; i < n; i++){ P[i] = -1; }
    // input.
    while(cin >> i >> l >> r){
        L[i] = l; R[i] = r;
        if(l >= 0) P[l] = i;
        if(r >= 0) P[r] = i;
    };

    i = 0;
    while(P[i] >= 0){ i++; };  // i is root.

    cout << "Preorder" << endl;  preorder(i);  cout << endl;
    cout << "Inorder" << endl;   inorder(i);   cout << endl;
    cout << "Postorder" << endl; postorder(i); cout << endl;

    delete [] P; delete [] L; delete [] R;
    return 0;
}