#include<iostream>
using namespace std;
int dd(int x){
	int y;
	y = x * x;
	return y;
}
int main(){
	int n;
	int a, b ,c;
	cin >> n;
	while(n > 0){
		cin >> a;
		cin >> b;
		cin >> c;
		if((dd(a) + dd(b) == dd(c)) || (dd(b) + dd(c) == dd(a)) || (dd(c) + dd(a) == dd(b))){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
		n--;
	}
}