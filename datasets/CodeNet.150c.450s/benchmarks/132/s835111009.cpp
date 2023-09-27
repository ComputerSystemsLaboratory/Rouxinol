#include <iostream>
using namespace std;
int main(){
  int n,p,i,stc;
  int hstc[50];

  while(1){
    cin >> n >> p;
    if (n==0&&p==0) break;

    stc = p;
    for (i=0;i<n;i++) hstc[i]=0;
    i=0;
    while(1){
      if (stc >0){
	stc--;
	hstc[i]++;
	if (hstc[i]==p) break;
      }else{
	stc=hstc[i];
	hstc[i]=0;
      }
      i++;
      if (i==n) i=0;
    }
    cout << i << endl;
  }
  return 0;
}