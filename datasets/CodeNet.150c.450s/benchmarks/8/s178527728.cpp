#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,i;
	string T,H;
	int score_T = 0,score_H = 0;


	cin>>n;
	for(i = 0;i < n;i++){
		cin>>T;
		cin>>H;
		if(T > H)
			score_T += 3;
		else if(T < H)
			score_H += 3;
		else {
			score_T++;
			score_H++;
		}
	}
	cout<<score_T<<" "<<score_H<<endl;
	return 0;
}