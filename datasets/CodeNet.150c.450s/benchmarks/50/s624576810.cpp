#include<iostream>
using namespace std;
int main(){
	int a;
	int coin[]={500,100,50,10,5,1};
	cin>>a;
	while(a!=0){
		a=1000-a;
		int total=0;
		int sheet=0;
		for(int i=0;i<6;i++){
			sheet=a/coin[i];
			a=a%coin[i];
			total+=sheet;
		}
		cout<<total<<endl;
		cin>>a;
	}
	return 0;
}