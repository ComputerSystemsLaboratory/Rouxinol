#include <bits/stdc++.h>

#define fi first
#define se second
#define mp make_pair
#define pb push_back

//#define int long long

#define upper(n,m) (n+m-1)/m
#define rounding(n) (int)((double)n+0.5)

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define ALL(a) a.begin(),a.end()

#define coutALL(i,a) {int i=0;for(int e:a) cout<<(i++?" ":"")<<e; cout<<endl;}
#define coutYN(a) cout<<(a?"Yes":"No")<<endl;
#define coutyn(a) cout<<(a?"yes":"no")<<endl;

#define deb cout<<"debug"<<endl
#define debn(n) cout<<"debug: "<<n<<endl

const int INF=INT_MAX;
const int MOD=(int)1e9+7;
const double EPS=1e-12;
//const int dx[]={0,1,0,-1},dy[]={-1,0,1,0};
const int dx[]={-1,-1,-1,0,1,1,1,0},dy[]={-1,0,1,1,1,0,-1,-1};

using namespace std;

typedef pair<int,int> P;
typedef long long LL;

LL ans;

void merge(vector <int> &A,int left,int mid,int right){

  int n1=mid-left;
  int n2=right-mid;
  int L[n1], R[n2];

  for(int i=0;i<n1;i++) L[i] = A[left + i];
  for(int i = 0;i<n2;i++) R[i] = A[mid + i];

  L[n1] = INF;
  R[n2] = INF;

  for(int i=0,j=0,k=left;k<right;k++){

    if(L[i]<=R[j]){

      A[k] = L[i];
      i++;

    }

    else {

      A[k] = R[j];
      j++;
      ans+=(LL)n1-(LL)i;

    }

  }

}

void mergeSort(vector <int> &A,int left,int right){

  if(left+1 < right){

    int mid = (left + right)/2;

    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);

  }

}

signed main(){

  int n;
  cin>>n;

  vector <int> a(n);
  REP(i,n) cin>>a[i];

  mergeSort(a,0,n);

  cout<<ans<<endl;

  return 0;

}
