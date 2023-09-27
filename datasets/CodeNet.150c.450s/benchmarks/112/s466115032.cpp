#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	int m;
	char data[5000][2];
	string s;
	while(true){
		cin>>n;
		if(n==0)break;
		string str;
		for(int i=0;i<n;i++){
			cin>>data[i][0]>>data[i][1];
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>s;
			str=str+s;
		}
		for(int i=0;i<str.size();i++){
			for(int j=0;j<n;j++){
				if(data[j][0]==str[i]){
					str[i]=data[j][1];
					break;
				}
			}
		}
		cout<<str<<endl;
	}
	return 0;
}