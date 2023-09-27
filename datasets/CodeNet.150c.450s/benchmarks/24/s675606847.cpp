#include<iostream>
#include<algorithm>
#define f first
#define s second
using namespace std;
int main(){
  int n,m;
  pair<int,int>d[10000];
  while(cin>>n>>m&&n!=0){
    int an=0,k=0;
    for(int i=0;i<n;i++)cin>>d[i].s>>d[i].f,k+=d[i].s;
    sort(d,d+n);
    for(int i=0;m<k;i++){
      if(k-m<d[i].s)an+=d[i].f*(k-m);
      else an+=d[i].f*d[i].s;
      k-=d[i].s;
    }
    cout<<an<<endl;
  }
  return 0;
}