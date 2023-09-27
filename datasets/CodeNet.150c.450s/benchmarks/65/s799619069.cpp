#include<iostream>
using namespace std;

struct pa{
  char a;
 int b;
};

int main(){
  int n,tmp,mini;
  pa a[101],b[101];
  char tmpc;

 cin>>n;
  for(int i=0;i<n;i++) cin>>a[i].a>>a[i].b;
  for(int i=0;i<n;i++) b[i].a=a[i].a,b[i].b=a[i].b;
  for(int i=0;i<n-1;i++)
    for(int j=n-1;j>i;j--){
      if(a[j].b<a[j-1].b){
	tmpc=a[j].a,tmp=a[j].b;
	a[j].a=a[j-1].a,a[j].b=a[j-1].b;
	a[j-1].a=tmpc,a[j-1].b=tmp;
      }
    }
 for(int i=0;i<n-1;i++){
    mini=i;
    for(int j=i;j<n;j++)if(b[j].b<b[mini].b)mini=j;

    tmp=b[i].b,tmpc=b[i].a;
    b[i].b=b[mini].b,b[i].a=b[mini].a;
    b[mini].b=tmp,b[mini].a=tmpc;
  }

 for(int i=0;i<n-1;i++) cout<<a[i].a<<a[i].b<<" ";
 cout<<a[n-1].a<<a[n-1].b<<endl<<"Stable"<<endl;
 int f=0;
 for(int i=0;i<n;i++)
   if(a[i].a!=b[i].a && a[i].b==b[i].b)f=1;

 for(int i=0;i<n-1;i++) cout<<b[i].a<<b[i].b<<" ";
 cout<<b[n-1].a<<b[n-1].b<<endl;
 if(f==0) cout<<"Stable"<<endl;
 else cout<<"Not stable"<<endl;

  return 0;
}