#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int money[200001];
	money[0] = 2000000000;
	int maxProfit=1-1000000000;
	int min=money[0];
	
	for(int i=1;i<=n;i++){
		cin>>money[i];
		if(money[i]-min > maxProfit){
			maxProfit = money[i]-min;
		}
		if(min>money[i]){
			min = money[i];
		}
	}
	cout<<maxProfit<<endl;
	return 0;
}