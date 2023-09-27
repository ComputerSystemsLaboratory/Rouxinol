#include<iostream>
using namespace std;
struct po{
  int num;
  char c;
};
int main(){
  int n;
  po a[100],b[100];
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i].c>>a[i].num,b[i]=a[i];
  for(int i=0;i<n-1;i++) 
    for(int j=n-1;i<j;j--){
      po tmp=a[j];
      if(a[j-1].num>a[j].num)a[j]=a[j-1],a[j-1]=tmp;
    }  
  for(int i=0;i<n-1;i++){ 
    int mini=i;
    for(int j=i;j<n;j++){
      if(b[j].num<b[mini].num)mini=j;
    }
    po tmp=b[i];
    b[i]=b[mini],b[mini]=tmp;
  }
  bool f=1;

  for(int i=0;i<n-1;i++){
    cout<<a[i].c<<a[i].num<<" ";
    if(a[i].c!=b[i].c)f=0;
}
  cout<<a[n-1].c<<a[n-1].num<<endl;
  cout<<"Stable"<<endl;
  for(int i=0;i<n-1;i++)cout<<b[i].c<<b[i].num<<" ";
  cout<<b[n-1].c<<b[n-1].num<<endl;
  if(f)cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  return 0;
}