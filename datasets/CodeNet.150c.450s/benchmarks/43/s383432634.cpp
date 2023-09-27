#include <iostream>
using namespace std;

int main()
{  
  while(true){
    int n;
    cin >> n;
    if(n==0) break;
    int asum=0,bsum=0;
    for(int i=0;i<n;i++){
      int a,b;
      cin >> a >> b;
      if(a>b) asum=asum+a+b;
      else if(a<b) bsum=bsum+a+b;
      else if(a==b){
	asum +=a;
	bsum +=b;
      }
    }
    cout << asum << " " <<  bsum << endl;
  }
  
  return 0;
}