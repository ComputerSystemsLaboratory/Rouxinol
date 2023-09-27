#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>
#include <cmath>
#include<stdio.h>
#define MAX 1000000000000000000LL
long long inf=1000000007;
using namespace std;
    int H,A[2000001];

void maxheapify(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=H&&A[l]>A[i])largest=l;
    else largest=i;
    if(r<=H&&A[r]>A[largest])largest=r;
    
    if(largest!=i){
        swap(A[i],A[largest]);
    maxheapify(largest);
    }
        
}
       
int main(){
    cin>>H;
    for(int i=1; i<=H; i++){
        cin>>A[i];
    }
    for(int i=H/2; i>=1; i--){
        maxheapify(i);
    }
    for(int i=1; i<=H; i++){
        cout<<" "<<A[i];
    }
    cout<<endl;
    
    return 0;

}