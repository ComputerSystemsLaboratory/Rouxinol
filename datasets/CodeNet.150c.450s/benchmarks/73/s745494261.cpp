#include<iostream>
#include<climits>
using namespace std;

long n,q;
long mn[300010];
long k=0,v=1;

void add(long i, long x){
  i += v;
  //cout<<"v:"<<v<<endl;
  mn[i] += x;
//  cout<<"mn["<<i<<"]:"<<mn[i]<<endl;
  i /= 2;
  while(i>0){
    int l=mn[i*2];
    int r=mn[i*2+1];
    mn[i]=l+r;
  //  cout<<"mn["<<i<<"]:"<<mn[i]<<endl;
    i /= 2;
  }
}

long getSum(long x,long y,long bottom=0,long top= v,long node=1){
//  cout<<"x:"<<x<<" y:"<<y<<" bottom:"<<bottom<<" top"<<top<<" node:"<<node<<endl;
  if(x<=bottom && top<=y) return mn[node];
  if(top<=x || y<=bottom) return 0;

  long mid = (bottom+top)/2;
  long lmx=getSum(x,y,bottom,mid,node*2);
  long rmx=getSum(x,y,mid,top,node*2+1);
  return lmx+rmx;
}


int main(){
  cin>>n>>q;
  while(n>=v){
    v *=2;
    k+=1;
  }
  for(int i=0;i<300010;i++){
   mn[i]=0;
  }
  long com,x,y;
  for(int i=0;i<q;i++){
    cin>>com>>x>>y;
    if(com==0){
      add(x,y);
    }else if(com==1){
      cout<<getSum(x,y+1)<<endl;
    }
  }
  return 0;
}