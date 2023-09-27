#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,taro=0,hanako=0;
	string str1,str2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str1>>str2;
		if(str1>str2)taro+=3;
		else if(str1==str2){
			taro+=1;
			hanako+=1;
		}
		else hanako+=3;
	}
	cout<<taro<<" "<<hanako<<endl;
	
}

