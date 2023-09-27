#include<iostream>
using namespace std;
int main(){
	
	char kazu[1001];
	int sum=0;
	cin>>kazu;
	while(kazu[0]!='0'){
		for(int i=0;kazu[i]!='\0';i++){
			sum+=kazu[i]-'0';
		}
		cout<<sum<<endl;
		sum=0;
		cin>>kazu;
	}
	
				
	return 0;
}