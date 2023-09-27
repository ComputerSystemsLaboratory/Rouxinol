#include <iostream>
using namespace std;

int i;

long long facto(int n){
	if(n==1) return n;
	else return n * facto(n-1);

}
int main(){
	int n;
	cin >> n;
	cout << facto(n) << "\n";


}