#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x<=y){
		while(x != 0){
			int v;
			v = x;
			x = y%x;
			y = v;
		}
		cout<<y<<endl;
	}
	else if(y <= x){
		while(y != 0){
			int v;
			v = y;
			y = x%y;
			x = v;
		}
		cout<<x<<endl;
	}
	return 0;
}



















//解けるけど時間がかかるやつ
/*int main(){
	int x,y;
	cin>>x>>y;
	if(x<=y){
		for(int i = x;i>=1;i--){
			if(x%i == 0 && y%i == 0){
				cout<<i<<endl;
				break;
			}
		}
	}
	else if(x>=y){
		for(int i = y;i>=1;i--){
			if(x%i == 0 && y%i == 0){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}*/
