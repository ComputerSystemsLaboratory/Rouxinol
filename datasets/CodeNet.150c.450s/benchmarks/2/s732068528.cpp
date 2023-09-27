#include<algorithm>

template<class T>
int partition(T &A, int first, int last){
    const int pivot = A[last-1];
    int bound = first-1;
    for(int i=first;i<last;++i)
        if(A[i]<=pivot) std::swap(A[++bound], A[i]);
    return bound;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> P(N);
    for(int i=0;i<N;++i) cin>>P[i];
    int bound = partition(P,0,N);
    string s;
    for(int i=0;i<N;++i){
        if(i==bound) s+='['+to_string(P[i])+"] ";
        else s+=to_string(P[i])+' ';
    }
    s.pop_back();
    cout<<s<<endl;
}