#include<algorithm>

template<class T>
int partition(T &A, int first, int last){
    const int pivot = A[last-1].second;
    int bound = first-1;
    for(int i=first;i<last;++i)
        if(A[i].second<=pivot) std::swap(A[++bound], A[i]);
    return bound;
}
template<class T>
void quickSort(T &A, int first, int last){
    if(last-first<2) return;
    const int bound = partition(A,first,last);
    quickSort(A,first,bound);
    quickSort(A,bound,last);
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    vector<pair<char,int>> A(N),B(N);
    for(int i=0;i<N;++i) cin>>A[i].first>>A[i].second;
    copy(A.begin(),A.end(),B.begin());
    quickSort(A,0,N);
    stable_sort(B.begin(),B.end(),[](pair<char,int>a,pair<char,int>b){return a.second<b.second;});
    cout<<(mismatch(A.begin(),A.end(),B.begin()).first==A.end()?"Stable":"Not stable")<<endl;
    for(auto &a:A) cout<<a.first<<' '<<a.second<<endl;
}