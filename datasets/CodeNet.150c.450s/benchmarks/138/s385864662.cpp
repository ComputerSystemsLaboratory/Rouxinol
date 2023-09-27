#include <iostream>
using namespace std;

int main(){
	int x,y,a;
	cin >> x >> y ;
	while(x%y!=0){
    a=x%y;
    x=y;
    y=a;
  }
  cout << y <<"\n";
}