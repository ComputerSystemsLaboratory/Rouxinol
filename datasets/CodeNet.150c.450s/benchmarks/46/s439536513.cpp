#include <iostream>
using namespace std;
int main(){
  int cou,a,b;
  while(1){
    cin >> a >> b;
    if(a==0&&b==0)break;
    cou=0;
    for(int i=1;i<=a-2;i++){
      for(int j=i+1;j<=a-1;j++){
	for(int k=j+1;k<=a;k++){
	  if(i+j+k==b)cou++;
	}
      }
    }
    cout << cou<< endl;
  }
  return 0;
}