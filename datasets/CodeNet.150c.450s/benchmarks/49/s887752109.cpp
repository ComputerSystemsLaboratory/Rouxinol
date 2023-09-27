#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(!n){
			break;
		}
		vector<int> score;
		int in;
		for(int i=0;i<n;i++){
			cin>>in;
			score.push_back(in);
		}
		sort(score.begin(),score.end());
		int sum=0;
		for(int i=1;i<score.size()-1;i++){
			sum+=score[i];
		}
		int avr=sum/(n-2);
		cout<<avr<<endl;
	}
	return 0;
}
