#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
const double EPS = 1e-10;//sample:if((double)>=(double)+EPS)
#define CLR(a) memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)  cerr << #x << " = " << (x) << endl;//debug
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

unsigned long long int cnt=0;
using namespace std;
void merge(int A[], int left, int mid, int right){
  int n1=mid-left,n2=right-mid,L[300000],R[300000];
  for(int i=0;i<n1;i++)L[i] = A[left+i];
  for(int i=0;i<n2;i++)R[i] = A[mid+i];
  L[n1]=R[n2]=INT_MAX;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]) A[k]=L[i++];
    else {
      A[k]=R[j++];
      cnt+=n1-i;
    }
  }
}
void mergeSort(int A[], int left, int right){
  if(left+1<right){
    int mid = (left + right) / 2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}

int main(){
  int n;
  cin>>n;
  int S[300000];
  for(int i=0;i<n;i++)scanf("%d",&S[i]);
  mergeSort(S,0,n);
  //for(int i=0;i<n-1;i++)cout<<S[i]<<" ";
  //cout<<S[n-1]<<endl;
  cout<<cnt<<endl;
  return 0;
}

