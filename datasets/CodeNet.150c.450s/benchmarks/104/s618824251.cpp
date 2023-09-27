#include <iostream>
#include <cstdio>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int w,n;
    cin >> w >> n;
    int i;
    int c[w+1];
    for(i=0; i<=w; i++){
        c[i] = i;
    }
    int a,b;
    for(i=0; i<n; i++){
        scanf("%d,%d", &a, &b);
        swap(&c[a],&c[b]);
    }
    for(i=1; i<=w; i++){
        cout << c[i] << endl;
    }
    return 0;
}