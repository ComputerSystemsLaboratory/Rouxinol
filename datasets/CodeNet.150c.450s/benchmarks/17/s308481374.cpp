#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		cin >> a[i];
	}
  sort(a,a+5,greater<int>()); 
	for(i=0;i<5;i++){
		cout << a[i];
		if(i<4)cout << ' ';
		else cout << endl;
	}
  return 0;
}