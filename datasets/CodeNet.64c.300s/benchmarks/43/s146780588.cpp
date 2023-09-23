#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	int score1[4],score2[4];
	int total1,total2;
	total1=total2=0;
	for(int i=0;i<4;i++){
		cin>>score1[i];
		total1 += score1[i];
 	}
	for(int i=0;i<4;i++){
		cin>>score2[i];
		total2 += score2[i];
	}
	if(total1>total2)cout<<total1<<endl;
	else cout<<total2<<endl;
	return 0;
}