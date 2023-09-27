#include <iostream>
using namespace std;

int m[30][2],a,b,c,l,root,ch[40];

void pre(int n){
  cout<<" "<<n;
  if(m[n][0]!=-1)pre(m[n][0]);
  if(m[n][1]!=-1)pre(m[n][1]);
}

void in(int n){

  if(m[n][0]!=-1)in(m[n][0]);
    cout<<" "<<n;
  if(m[n][1]!=-1)in(m[n][1]);
}

void pos(int n){
  if(m[n][0]!=-1)pos(m[n][0]);
  if(m[n][1]!=-1)pos(m[n][1]);
  cout<<" "<<n;
}

int main(){
  cin>>l;
  for(int i=0;i<=l;i++)ch[i]=0;
  for(int i=0;i<l;i++){
    cin>>a>>b>>c;
    m[a][0]=b;
    m[a][1]=c;
    ch[b]=1;
    ch[c]=1;
  }
  for(int i=0;i<l;i++)if(ch[i]==0)root=i;
  cout<<"Preorder"<<endl;
  pre(root);
  cout<<endl;
  cout<<"Inorder"<<endl;
  in(root);
  cout<<endl;
  cout<<"Postorder"<<endl;
  pos(root);
  cout<<endl;
  return 0;
}