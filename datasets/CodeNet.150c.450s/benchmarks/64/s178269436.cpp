#include<iostream>
using namespace std;
bool solve(int i, int A[], int n, int m){
    if(m==0)    return true;
    else if(m<0 || i>=n)    return false;
    else{
        return solve(i+1, A, n, m-A[i]) || solve(i+1, A, n, m);
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int q;
    cin>>q;
    int m[q];
    for(int i=0; i<q; i++)
        cin>>m[i];
    for(int i=0; i<q; i++){
        if(solve(0, A, n, m[i]))    cout<<"yes"<<endl;
        else    cout<<"no"<<endl;
    }
}
