#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release



int n,A[5000000];

void maxheapify(int i){
  int l=2*i,r=2*i+1,largest;
  if(l<=n&&A[l]>A[i])largest=l;
  else largest=i;
  if(r<=n&&A[r]>A[largest])largest=r;
  if(largest!=i){
    swap(A[i],A[largest]);
    maxheapify(largest);
  }
}
int extract(){
  int maxv;
  if(n<1)return INT_MIN;
  maxv=A[1];
  A[1]=A[n--];
  maxheapify(1);
  return maxv;
}
void increasekey(int i,int key){
  if(key<A[i])return;
  A[i]=key;
  while(i>1&&A[i/2]<A[i]){
    swap(A[i],A[i/2]);
    i/=2;
  }
}
void insert(int key){
  A[++n]=INT_MIN;
  increasekey(n,key);
}

int main(){
  int key;
  string str;
  while(1){
    cin>>str;
    if(str=="end")break;
    if(str=="insert"){
      cin>>key;
      insert(key);
    }
    else cout<<extract()<<endl;
  }
  return 0;
}
