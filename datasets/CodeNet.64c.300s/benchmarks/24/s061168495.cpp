#include<iostream>
using namespace std;

int main(void){
  int n,a,b;

  while(1){
    cin >> n;
    if(n==0)break;
    int Pa=0,Pb=0;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      if(a>b)Pa+=a+b;
      else if(a<b)Pb+=a+b;
      else {Pa+=a; Pb+=b;}
    }
    cout << Pa <<" "<< Pb << endl;
  }
  return 0;
}