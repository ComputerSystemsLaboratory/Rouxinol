#include<iostream>
using namespace std;
int main(){
 int x, y;
 cin >> x >> y;

 if( -1000 <= x && y <= 1000 ){
 if( x > y ){
  cout << "a > b" << endl;
 }else if( x < y ){
  cout << "a < b" << endl;
 }else{
  cout << "a == b" << endl;
 }
 }

 return 0;
}