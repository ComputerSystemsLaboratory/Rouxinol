#include<iostream>
#include<climits>
using namespace std;
typedef struct{
  int a[2000];
  bool f;
}node;

node T[103];
int m;
int n;
int ans;
int cnt;
int num;
void route(){
  m=INT_MAX;
  if(cnt==n-1)return;
  for(int i=0;i<n;i++){
    if(T[i].f==true){
      for(int j=0;j<n;j++){
	if(m>T[i].a[j]){
	  if(T[j].f==false){
	    m=T[i].a[j];
	    num=j;
	  }
	}
      }
    }
  }
  ans+=m;
  cnt++;
  //  cout<<"m "<<m<<endl;
  T[num].f=true;
  route();
}
int main(){
  int key;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>key;
      if(key==-1)T[i].a[j]=INT_MAX;
      else T[i].a[j]=key;
    }
  }
  T[0].f=true;
  route();
  cout<<ans<<endl;
  return 0;
}