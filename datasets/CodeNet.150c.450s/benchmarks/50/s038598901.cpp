#include<iostream>
using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0)break;
		cout << (1000-n)/500+(1000-n)%500/100+(1000-n)%500%100/50+(1000-n)%500%100%50/10+(1000-n)%500%100%50%10/5+(1000-n)%500%100%50%10%5 <<endl;
	}
	return 0;
}