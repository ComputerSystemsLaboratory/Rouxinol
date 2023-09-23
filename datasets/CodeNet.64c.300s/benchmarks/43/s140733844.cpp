#include<iostream>
using namespace std;
int main(){
  int total1,total2,a,b,c,d;
  cin >> a >> b >> c >> d;
  total1=a+b+c+d;
  cin >> a >> b >> c >> d;
  total2=a+b+c+d;
  if(total1>total2){
    cout << total1 << endl;
  }
  else{
    cout << total2 << endl;
  }
}