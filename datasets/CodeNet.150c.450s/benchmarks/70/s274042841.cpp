#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,d,ans,i,tmp = 0;
	while(cin>>m>>d,m != 0){
		ans = 0;
		tmp = 0;
		for(i = m-1;i != 0;i--){
			switch(i){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
			{
				tmp += 31;
				break;
			}
				case 4:
				case 6:
				case 9:
				case 11:
			{
				tmp += 30;
				break;
			}
				case 2:
			{
				tmp += 29;
				break;
			}
			}
		}
		tmp += d;
		ans = tmp % 7;
		switch(ans){
			case 0:{
				cout<<"Wednesday"<<endl;
				break;
			}
			case 1:{
				cout<<"Thursday"<<endl;
				break;
			}
			case 2:{
				cout<<"Friday"<<endl;
				break;
			}
			case 3:{
				cout<<"Saturday"<<endl;
				break;
			}
			case 4:{
				cout<<"Sunday"<<endl;
				break;
			}
			case 5:{
				cout<<"Monday"<<endl;
				break;
			}
			case 6:{
				cout<<"Tuesday"<<endl;
				break;
			}
		}
	}
	return 0;
}