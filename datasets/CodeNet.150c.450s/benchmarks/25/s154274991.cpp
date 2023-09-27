#include<iostream>
using namespace std;
int main(){
	char c;
	int count[26]={0},a,i;
	while(cin>>c){
		a=c-'a';
		if(a<0){
			a+=32;
		}
		count[a]++;
	}
	for(i=0;i<26;i++){
		cout<<(char)(i+'a')<<" : "<<count[i]<<endl;
	}
	return 0;
}
		