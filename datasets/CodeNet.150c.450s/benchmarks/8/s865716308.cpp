#include<iostream>
#include<string>
using namespace std;
int main(){
	string taro;
	string hanako;
	int p_taro=0;
	int p_hana=0;
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>taro>>hanako;
		if(taro>hanako)
			p_taro+=3;
		else if(taro<hanako)
			p_hana+=3;
		else if(taro==hanako){
			p_taro+=1;
			p_hana+=1;
		}
	}
	cout<<p_taro<<" "<<p_hana<<endl;
}