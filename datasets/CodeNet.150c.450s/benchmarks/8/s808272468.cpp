#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, score_t = 0, score_h = 0;
	string taro, hanako;
	
	cin>>n;

	for(int i =0; i < n; i++){
		cin>>taro>>hanako;
		if(taro == hanako) {
			score_t++;
			score_h++;
		} else if(taro > hanako) score_t += 3;
		else score_h += 3;
	}
	
	cout<<score_t<<" "<<score_h<<endl;
	
	
	return 0;
}
