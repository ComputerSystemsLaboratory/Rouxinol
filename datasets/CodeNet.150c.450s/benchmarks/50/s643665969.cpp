#include<iostream>
using namespace std;
int main(){
	int monny;
	int coin[]={500,100,50,10,5,1};
	while(cin>>monny&&monny!=0){
		monny=1000-monny;
		int answer=0;
		for(int i=0;i<6;++i){
			answer+=monny/coin[i];
			monny%=coin[i];
		}
		cout<<answer<<endl;
	}
	return 0;
}