#include<iostream>
using namespace std;

int main(){
  int a[4],c[4];
  while(cin>>a[0]){
    int e=0,b=0;
    for(int i=1;i<4;i++)
      cin>>a[i];
    for(int i=0;i<4;i++){
      cin >> c[i];
      for(int j=0;j<4;j++)
	if(c[i]==a[j]){
	  if(i==j)e++;
	  else b++;
	}
    }
    cout<<e<<' '<<b<<endl;
  }
  return 0;
}