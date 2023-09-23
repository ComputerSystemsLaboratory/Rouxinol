#include<iostream>

using namespace std;

int main(void){
	
	int coin[6]={500,100,50,10,5,1},price,sum;
	while(cin>>price,price){
		sum=0;
		price=1000-price;
		for(int i=0;i<6;i++){
			while(price>=coin[i]){
				price=price-coin[i];
				sum++;
			}
		}
		cout<<sum<<endl;
	}
}