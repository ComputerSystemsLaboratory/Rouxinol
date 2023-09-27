#include<iostream>
using namespace std;
int main(){
  int n;
  int a[10];
  int b[11];
  int c[11];
  int k;
  int k2;
  int out=0;
  cin>>n;
  b[0]=0;
  c[0]=0;
  for(int i=0;i<n;i++){
    out=0;
    k=0;
    k2=0;
    b[1]=0;
    c[1]=0;
    for(int j=0;j<10;j++){
      cin>>a[j];
      if(b[k]<a[j]){
	b[k+1]=a[j];
	k++;
      }
      else if(c[k2]<a[j]){
	c[k2+1]=a[j];
	k2++;
      }
      else{
	out=1;
      }
    }
    if(out==0) cout << "YES" << endl;    
    else if(out==1) cout << "NO" <<endl;
  }
}