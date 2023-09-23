#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int ans=(int)log10((double)a+b)+1;
		cout << ans << endl;
	}
}