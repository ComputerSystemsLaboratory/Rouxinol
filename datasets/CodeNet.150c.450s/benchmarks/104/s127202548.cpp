#include<iostream>
using namespace std;
int main() {
  int num,change,x,y;
  cin>>num;
  cin>>change;
  char c;
  int *now=new int[num+1]; 
  now[0]=0;
  for(int i=1;i<=num;i++) 
    now[i]=i;
  for(int i=0;i<change;i++) {
    cin>>x>>c>>y;
    int tmp=now[x];
    now[x]=now[y];
    now[y]=tmp;
  }
  for(int i=1;i<=num;i++)
    cout<<now[i]<<endl;
  return 0;
}

