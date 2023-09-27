#include<iostream>

using namespace std;
#define MAX 100000

int parent(int i){return i/2;}
int left(int i){return i*2;}
int right(int i){return i*2+1;}


int main(){
    int n;
    int heap[MAX+1];
    int p, l, r;

    cin >> n;
    for(int i=1;i<=n;i++) cin >> heap[i];
    for(int i=1;i<=n;i++){
        p = parent(i); l = left(i); r = right(i);

        cout << "node " << i <<": ";
        cout << "key = " << heap[i] << ", ";
        if(p >0) cout << "parent key = " << heap[p] <<", ";
        if(l<=n) cout << "left key = " << heap[l] <<", ";
        if(r<=n) cout << "right key = " << heap[r] <<", ";
        cout << endl;
    }

    return 0;
}

