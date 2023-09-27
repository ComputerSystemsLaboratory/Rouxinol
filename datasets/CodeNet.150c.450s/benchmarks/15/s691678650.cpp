#include <iostream>
using namespace std;

int main(){
  int a,b,c,cou,m[10001];
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>m[i];
  }
  cin>>b;
  cou=0;
  for(int i=0;i<b;i++){
    cin>>c;
    for(int j=0;j<a;j++){
      if(c==m[j]){
	cou++;
	break;
      }
    }
  }
  cout<<cou<<endl;
  return 0;
}
  