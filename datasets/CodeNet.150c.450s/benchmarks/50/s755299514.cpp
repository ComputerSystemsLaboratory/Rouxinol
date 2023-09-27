#include <iostream>
using namespace std;

int main(){
	int price,count,x,n;
	int coin[] = {500,100,50,10,5,1};
	while(cin >> n && n){
		price = 1000 - n;
		count = 0;
		for(int i = 0;i<6;i++){
			x = price / coin[i];
			count += x;
			price -= coin[i] * x; 
		}
		cout << count << endl;
	}
	return 0;
}