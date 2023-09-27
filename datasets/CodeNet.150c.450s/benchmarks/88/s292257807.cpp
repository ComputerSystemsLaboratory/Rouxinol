#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>

using namespace std;

struct S{
	int h,w,hw;
};

bool operator<(S a,S b){
	return (a.hw<b.hw||(a.hw==b.hw&&a.h<b.h));
}

int main(){

	int h,w;
	vector<S> sq;
	S s;

	for(int i=1;i<=200;i++){
		for(int j=i+1;j<=200;j++){
			s.h=i,s.w=j,s.hw=i*i+j*j;
			sq.push_back(s);
		}
	}

	sort(sq.begin(),sq.end());

	while(1){
		cin>>h>>w;
		if(h==0&&w==0) break;
		for(int i=0;;i++){
			if(sq[i].h==h&&sq[i].w==w){
				cout<<sq[i+1].h<<" "<<sq[i+1].w<<endl;
				break;
			}
		}
	}

	return 0;
}