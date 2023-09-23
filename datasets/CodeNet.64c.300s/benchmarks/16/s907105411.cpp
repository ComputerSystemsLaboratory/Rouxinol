#include<iostream>
using namespace std;

int min(int x,int y){
	if (x<=y){
		return x;
	}else{
		return y;
	}
	
}

int max(int x,int y){
	if (x>=y){
		return x;
	}else{
		return y;
	}
	
}

int main(){
	int N,m,range,a1,a2,a,i;
	cin >> N;
	cin >> a1;
	cin >> a2;
	m=min(a1,a2);
	range=a2-a1;
	for (i=3;i<=N;i++){
		cin >> a;
		range=max(range,a-m);
		m=min(m,a);
	}
	cout << range << endl;
	return 0;
}