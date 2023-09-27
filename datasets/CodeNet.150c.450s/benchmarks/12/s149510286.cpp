#include<iostream>
#include<limits.h>
using namespace std;
const int MAX = 502, NIL = INT_MAX;
int main(){
    int n, heap[MAX];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> heap[i];
    }
    for (int i = 1; i <= n+1; i++)
    {
        heap[n+i] = NIL;
    }
    heap[0] = NIL;
    
    for (int i = 1; i <= n; i++)
    {
        cout << "node " << i << ": key = " << heap[i] << ", ";
        if (heap[i/2] != NIL)
        {
            cout << "parent key = " << heap[i/2] << ", ";
        }
        
        if (heap[2*i] != NIL)
        {
            cout << "left key = " << heap[2*i] << ", ";
        }
        if (heap[2*i+1] != NIL)
        {
            cout << "right key = " << heap[2*i+1] << ", ";
        }
        cout << endl;
    }
}
