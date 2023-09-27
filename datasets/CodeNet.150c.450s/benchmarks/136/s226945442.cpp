#include <iostream>
using namespace std;

int main()
{
  int a,b;
  while(cin >> a >> b){
    int GCD,LCM;
    int temp;
    if(a<b){
      temp = a;
      a = b;
      b = temp;
    }
    for(int i=1; i<=b; i++){
      if( b%i==0 && a%(b/i)==0 ){
	GCD = b/i;
	break;
      }
    }
    for(int i=1; i<=b; i++){
      if( (a*i)%b == 0 ){
	LCM = a*i;
	break;
      }
    }
    cout << GCD << " " << LCM << endl;
  }
  return 0;
}