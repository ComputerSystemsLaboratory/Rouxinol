#include <iostream>
using namespace std;

int main(){
  int hi,bu,a[4],b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
      hi=0;
      bu=0;
      for(int i=0;i<=3;i++){
	for(int j=0;j<=3;j++){
	  if(a[i]==b[j]){
	    if(i==j)hi++;
	    else bu++;
	  }
	}
      }
      cout<<hi<<" "<<bu<<endl;
    }
  return 0;
}