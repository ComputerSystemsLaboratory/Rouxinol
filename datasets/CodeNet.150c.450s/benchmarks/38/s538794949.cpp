#include<iostream>

using namespace std;

int main(){
  int d,a,b,c,n;
  cin >> d;
  for(n=0;n<d;n++){
    cin >> a >> b >> c;
    if(a*a==b*b+c*c){
      cout << "YES" << endl;
    }
    else if(b*b==a*a+c*c){
      cout << "YES" << endl;
    }
    else if(c*c==a*a+b*b){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
  return 0;
}


