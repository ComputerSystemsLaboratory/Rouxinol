#include<iostream>

using namespace std;

int A[20], N;

bool exhaustiveSearch(int m, int s, int n){
    if(n==N+1) return false;//it's over
    if(s==m) return true;

    int next = n+1;
    if (exhaustiveSearch(m,s,next)) {
        return true;
    }else
    {
        s+=A[n];
        return exhaustiveSearch(m,s,next);
    }
}

int main(){
    int i,q;
    cin >> N;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    cin>>q;
    for(i=0;i<q;i++){
        int m;
        cin >> m;
        exhaustiveSearch(m,0,0)?cout<<"yes":cout<<"no";
        cout<<endl;
    }
}
