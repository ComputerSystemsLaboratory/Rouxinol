#include<iostream>
using namespace std;
int main(){

 int num, kotae;
 cin >> num;

 if( num >= 1 && num <= 100 ){
  kotae = num*num*num;
  cout << kotae << endl;
 }

 return 0;
}