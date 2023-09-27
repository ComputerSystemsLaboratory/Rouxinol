#include<iostream>
#include<cstdio>
#define MAX 500002
using namespace std;

int left(int i){ return 2 * i; }
int right(int i){ return 2 * i + 1; }

int A[MAX], H;

void maxHeapify(int i){
    int largest,tmp;
    int l = left(i);
    int r = right(i);
    
    if(l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    
    if (r <= H && A[r] > A[largest]) largest = r;
    
    if (largest != i){
        tmp = A[i]; A[i] = A[largest]; A[largest] = tmp;
        maxHeapify(largest);
    }
}

int main(){
    scanf("%d",&H);
    for(int i = 1; i <= H; i++) scanf("%d",&A[i]);
    for(int i = H / 2; i > 0; i--){
        maxHeapify(i);
    }
    for(int i = 1; i <= H; i++) printf(" %d",A[i]);
    cout << endl;
    return 0;
}
