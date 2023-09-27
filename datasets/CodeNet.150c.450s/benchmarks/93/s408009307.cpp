#include<iostream>
#define N 1000000
#define INF 1000000006
using namespace std;

struct card{
  char f;
  int s;
};

card a[N],L[N],R[N],b[N];
int n,cnt;

void merge(int l,int m,int r){
  int n1=m-l,n2=r-m;
  for(int i=0;i<n1;i++) L[i]=b[l+i];
  for(int i=0;i<n2;i++)R[i]=b[m+i];
  L[n1].s=INF,R[n2].s=INF;
  int i=0,j=0;
  for(int k=l;k<r;k++){
    if(L[i].s<=R[j].s){
      b[k]=L[i],i++;
    }else {
      b[k]=R[j],j++;
    }
    cnt++;
  }
}

void msort(int l,int r){
  int m;
  if(l+1<r){
 m=(l+r)/2;
  msort(l,m);
  msort(m,r);
  merge(l,m,r);
  }
}

int partition(int p,int r){
  card t,x;
  int i;
  x=a[r],i=p-1;
  for(int j=p;j<r;j++)if(a[j].s<=x.s)i++,t=a[i],a[i]=a[j],a[j]=t;
  a[r]=a[i+1],a[i+1]=x;
  return i+1;
}

void quicksort(int p,int r){
  int q;
  if(p<r){
    q=partition(p,r);
    quicksort(p,q-1);
    quicksort(q+1,r);
  }
}

int main(){
    int f=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i].f>>a[i].s;
    b[i]=a[i];
  }
  
  quicksort(0,n-1);
  msort(0,n);
  
  for(int i=0;i<n;i++)if(a[i].f!=b[i].f || a[i].s!=b[i].s)f=1;
  
  if(f)cout<<"Not stable"<<endl;
  else cout<<"Stable"<<endl;

  for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<endl;
  
  return 0;
}