#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX=10000000;
int H, A[5000000];

void maxHeapfy(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;

    if(l<=H && A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=H && A[r]>A[largest]) largest=r;

    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapfy(largest);
    }
}

int main(){
    cin >> H;
    for(int i=1; i<=H; i++) cin >> A[i];

    for(int i=H/2; i>=1; i--) maxHeapfy(i);

    for(int i=1; i<=H; i++){
        printf(" %d",A[i]);
    } 
    printf("\n");
}
