#include <iostream>
using namespace std;
int main(){
  int n,p,data[50],i,d,result;
  while(1){
    cin >> n >> p;
    d=p;
    if(n==0&&p==0) break;
    for(i=0;i<n;i++) data[i]=0;
    i=0;
    while(1){
      if(p>0){
	p--;
        data[i]++;
	if(data[i]==d){
	  result=i;
	  break;
	}
      }else if(p==0){
        p=data[i];
        data[i]=0;
      } 
      if(i+1==n) i=0;
      else i++;
    }
    cout << result << endl;
  }
  return 0;
}