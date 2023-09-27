#include <iostream>
using namespace std;

int c[26][2],p[26];

int pr(int now){
  cout<<" "<<now;
  if(c[now][0]!=-1)pr(c[now][0]);
  if(c[now][1]!=-1)pr(c[now][1]);
  return 0;
}
int in(int now){
  if(c[now][0]!=-1)in(c[now][0]);
  cout<<" "<<now;
  if(c[now][1]!=-1)in(c[now][1]);
  return 0;
}
int po(int now){
  if(c[now][0]!=-1)po(c[now][0]);
  if(c[now][1]!=-1)po(c[now][1]);
  cout<<" "<<now;
  return 0;
}

int main(){
  int a,b,e,d,now;
  cin>>a;
  for(int i=0;i<=a;i++)p[i]=-1;
  for(int i=0;i<a;i++){
    cin>>b>>e>>d;
    p[d]=b;
    p[e]=b;
    c[b][0]=e;
    c[b][1]=d;
  }
  for(int i=0;i<a;i++)if(p[i]==-1)now=i;
  //cout<<now<<"<---"<<endl;//////
  cout<<"Preorder"<<endl;
  pr(now);
  cout<<endl;
  cout<<"Inorder"<<endl;
  in(now);
  cout<<endl;
  cout<<"Postorder"<<endl;
  po(now);
  cout<<endl;
  return 0;
}