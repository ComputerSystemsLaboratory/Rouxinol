#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int cu[28];
	int Ans[2];
	for(int i = 0;i<28;i++){
		cin>>cu[i];
	}
	sort(cu,cu+28);
	int coun = 0;
	int coun_2 = 0;
	for(int i = 1;i<=30;i++){
		if(cu[coun]!=i){
			Ans[coun_2] = i;
			coun_2++;
		}
		else{
			coun++;
		}
	}
	cout<<Ans[0]<<endl;
	cout<<Ans[1]<<endl;
}