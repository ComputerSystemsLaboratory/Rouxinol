#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int P[100000];
int quickSort(int p,int r){
    int i=p-1;
    for(int j=p;j<r;++j){
        if(P[j]<=P[r-1]){
            i++;
            swap(P[i],P[j]);
        }
    }
    return i;
}
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;++i) cin>>P[i];
    int q = quickSort(0,N);
    string s;
    for(int i=0;i<N;++i){
        if(i==q) s+='['+to_string(P[i])+"] ";
        else s+=to_string(P[i])+' ';
    }
    s.pop_back();
    cout<<s<<endl;
}