#include<iostream>
using namespace std;
int coin[6] = {500,100,50,10,5,1};

int main(){
	int money, price;
	while(cin >> price){
		if(price==0) break;
		money = 1000-price;
		int count=0;
		for(int i=0; i<6; i++)
			while(money>=coin[i]) {count++; money-=coin[i];}
		cout << count << endl;
	}
	return 0;
}