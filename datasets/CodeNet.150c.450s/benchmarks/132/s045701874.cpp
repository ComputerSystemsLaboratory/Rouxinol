#include<iostream>
using namespace std;
int main(){
  int n,p,c,i;
  int a[51];
  while(1){
    //skk
    for(int j=0;j<51;j++){
      a[j]=0;
    }
    i=0;

    cin >> n >> p;
    if(n==0&&p==0)break;
    c=p;
    while(1){
      if(c!=0){
	a[i]++;
	c--;
	if(a[i]==p){
	  cout << i << endl;
	  break;
	}
      }
      else{
	c+=a[i];
	a[i]=0;
      }
      i++;
      if(i==n)i=0;
    }
  }
  return 0;
}