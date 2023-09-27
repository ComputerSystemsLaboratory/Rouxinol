#include<iostream>

using namespace std;

int main(void){
	int money = 100000;
	int n;
	cin>>n;
	for(int i = 0; i < n ; i++){
	money = money + ((int)(money * 0.05)+999)/1000*1000;
	}
	cout<<money<<endl; 
}