#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,cou,m[101];
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>m[i];
  }
  cou=0;
  for(int i=0;i<a;i++){
    for(int j=0;j<=a-2-i;j++){
      if(m[j]>m[j+1]){
	swap(m[j],m[j+1]);
	cou++;
      }
    }
  }
  for(int i=0;i<a;i++){
    cout<<m[i];
    if(i<a-1)cout<<" ";
  }
  cout << endl << cou << endl;
  return 0;
}
  
  