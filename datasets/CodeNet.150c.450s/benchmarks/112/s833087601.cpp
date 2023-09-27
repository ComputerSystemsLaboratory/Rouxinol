#include<iostream>
using namespace std;

const unsigned n_MAX=100000000;
int n,m;
char bef[n_MAX],aft[n_MAX],ans[n_MAX];


void solve(char& a){
	for(int i=0; bef[i]!='\0'; i++){
		if(bef[i]==a){
			a = aft[i];
			return;
		}
	}
}

void input1(){
	int i=0;
	for(; i<n; i++)
		cin >> bef[i] >> aft[i];
	bef[i]='\0';
}

void input2(){
	for(int i=0; i<m; i++){
		cin >> ans[i];
		solve(ans[i]);
	}
}

int main(){
	while(true){
		cin >> n;
		if(n==0)
			return 0;
		input1();
		cin	>> m;
		input2();
		cout << ans << endl;
	}
}