#include <iostream>
using namespace std;
int main(){
	int q,dice[7],x,y,ans[25];
	for(int i=1;i<=6;i++){
		cin>>dice[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		int ans=0;
		cin>>x>>y;
		for(int j=1;j<=6;j++){
			if(x==dice[j])ans=j;
		}
		switch(ans){
			case 1:
				if(y==dice[2]){
					cout<<dice[3]<<endl;
				}else if(y==dice[3]){
					cout<<dice[5]<<endl;
				}else if(y==dice[5]){
					cout<<dice[4]<<endl;
				}else{
					cout<<dice[2]<<endl;
				}
				break;
			case 2:
				if(y==dice[1]){
					cout<<dice[4]<<endl;
				}else if(y==dice[4]){
					cout<<dice[6]<<endl;
				}else if(y==dice[6]){
					cout<<dice[3]<<endl;
				}else{
					cout<<dice[1]<<endl;
				}
				break;
			case 3:
				if(y==dice[1]){
					cout<<dice[2]<<endl;
				}else if(y==dice[2]){
					cout<<dice[6]<<endl;
				}else if(y==dice[6]){
					cout<<dice[5]<<endl;
				}else{
					cout<<dice[1]<<endl;
				}
				break;
			case 4:
				if(y==dice[1]){
					cout<<dice[5]<<endl;
				}else if(y==dice[5]){
					cout<<dice[6]<<endl;
				}else if(y==dice[6]){
					cout<<dice[2]<<endl;
				}else{
					cout<<dice[1]<<endl;
				}
				break;
			case 5:
				if(y==dice[1]){
					cout<<dice[3]<<endl;
				}else if(y==dice[3]){
					cout<<dice[6]<<endl;
				}else if(y==dice[6]){
					cout<<dice[4]<<endl;
				}else{
					cout<<dice[1]<<endl;
				}
				break;
			case 6:
				if(y==dice[2]){
					cout<<dice[4]<<endl;
				}else if(y==dice[4]){
					cout<<dice[5]<<endl;
				}else if(y==dice[5]){
					cout<<dice[3]<<endl;
				}else{
					cout<<dice[2]<<endl;
				}
				break;
		}
	}
	return 0;
}