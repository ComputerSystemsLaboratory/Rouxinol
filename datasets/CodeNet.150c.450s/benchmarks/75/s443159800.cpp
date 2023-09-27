#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> A;
void maxH(int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    if(l<n&&A[l]>A[i]){
        largest = l;
    }else{
        largest = i;
    }

    if(r<n&&A[r]>A[largest]){
        largest = r;    
    }
    if(largest!=i){
            swap(A[i],A[largest]);
            maxH(largest);
    }
}
void buildM(){
    for(int i=n/2;i>=0;i--){
        maxH(i);
    }
}
int main(){
    cin >> n;
    A.resize(n);
    for(auto &i:A) cin >> i;
    buildM();
    for(auto &i:A) cout << " " << i;
    cout << endl;
}
