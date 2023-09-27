#include<iostream>
using namespace std;

int hoge(int sum,int cnt){
	if(sum/10<=9) return cnt;
	else return hoge(sum/10,++cnt);
}

int main(){
	for(;;){
		int a,b;
		cin>>a>>b;
		if(cin.fail()) break;
		if(a+b<10) cout<<1<<endl;
		else cout<<hoge(a+b,2)<<endl;
	}
	return 0;
}