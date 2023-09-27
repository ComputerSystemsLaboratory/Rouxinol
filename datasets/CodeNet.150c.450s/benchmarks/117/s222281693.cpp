#include <iostream>
#include <vector>

using namespace std;

#define INF 1<<30

vector<long> A;
int count;

void merge(int l,int m,int r){
    int n1 = m - l;
    int n2 = r - m;
    vector<int> L, R;
    for(int i=0;i<n1;i++)
        L.push_back(A[l+i]);
    for(int i=0;i<n2;i++)
        R.push_back(A[m+i]);
    L.push_back(INF);
    R.push_back(INF);
    int i,j;
    i=j=0;
    for(int k=l;k<r;k++){
        count++;
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int l,int r){
    if(l+1<r){
        int m = (l+r)/2;
        mergeSort(l,m);
        mergeSort(m,r);
        merge( l, m, r);
    }
}
int main(){
    int  n;
    long t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        A.push_back(t);
    }
    mergeSort(0,A.size());
    for(int i=0;i<A.size()-1;i++)
        cout<<A[i]<<" ";
    cout<<A[A.size()-1]<<endl;
    cout<<count<<endl;
    return 0;
}