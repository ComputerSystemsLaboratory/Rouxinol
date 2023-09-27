#include<iostream>
using namespace std;

int getTax(int price,int p){
	return price * (100+p) / 100;
}

int getMaxPrice(int x, int y, int s){
	int rowPrice1, rowPrice2;
	int taxPrice;
	int max=0;
	for(int i=1;i<s;i++){
		for(int j=1;j<s;j++){
			if(getTax(i,x) + getTax(j,x) == s){
				// cout << i << " " << j << endl;
				taxPrice = getTax(i,y) + getTax(j,y);
				max = (max < taxPrice) ? taxPrice : max;
			}
		}
	}
	return max;
}

int main(){
	int x, y, s;
	while(1){
		cin >> x >> y >>s;
		if(x+y+x==0) break;
		cout << getMaxPrice(x,y,s) << endl;
	}
	return 0;
}