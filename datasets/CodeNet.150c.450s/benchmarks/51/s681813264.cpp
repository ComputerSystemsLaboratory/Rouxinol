#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	int student[31]={};
	int num;
	for(int i=0;i<30;i++){
		cin>>num;
		student[num]=1;
 	}
	for(int i=1;i<=30;i++){
		if(student[i] == 0) cout<<i<<endl;
 	}
	return 0;
}