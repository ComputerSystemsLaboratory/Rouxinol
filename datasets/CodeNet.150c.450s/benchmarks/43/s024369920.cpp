#include<iostream>
using namespace std;

int main(){
	int match;
	while(1){
		cin >> match;
		if(match == 0)break;
		int a,b;
		int score_a=0,score_b=0;
		for(int i=0;i<match;i++){
			cin >> a >> b;
			if(a > b) score_a += (a+b);
			else if(a < b) score_b+=(a+b);
			else{
				score_a+=a;score_b+=b;
			}
		}
		cout << score_a << " " << score_b<<endl;
	}
	return 0;
}