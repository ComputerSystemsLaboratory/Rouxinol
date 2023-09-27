#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long sum = 0;
	long fra[10000];
	int n;
	
	//上限'n'の入力
	cin >> n;
	
	//配列fra[]に値を代入、合計値sumに加算
	for(int i = 0; i < n; i++){
		cin >> fra[i];
		sum = sum + fra[i];
	}
	
	while(1){
		int flag = 0;
	//ソート本体
		for(int i = 0; i < n; i++){
			if(fra[i-1] > fra[i] && i > 0 && i < n){
				swap(fra[i-1],fra[i]);
			}
		}
	//ソート判定
		int count = 0;
		for(int i = 0; i < n; i++){
			if(fra[i-1] <= fra[i] && i > 0 ){
				count++;
			} 
			if(count == n-1){
				flag = 1;
			}
		}
		
		if(flag == 1)break;
	}
	
	cout << fra[0] << " " << fra[n-1] << " " << sum << endl;
	
	return 0;
}