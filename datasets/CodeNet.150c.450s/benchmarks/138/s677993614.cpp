#include<iostream>
#include<utility>
using namespace std;

int gcb(int big,int small){
	int d;

	if(big < small)swap(big,small);
	d = big % small;

	// 再帰関数の終了条件
	if(d == 0)return small;

	return gcb(small,d);
}

int main(){
	int a,b;

	cin >> a;
	cin >> b;

	cout << gcb(a,b) <<endl;
	
	return 0;
}
