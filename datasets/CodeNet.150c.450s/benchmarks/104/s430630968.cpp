#include <iostream>
#include<algorithm>
#include<array>

using namespace std;

int W,N;

int main(){

	cin>>W>>N;
	array<pair<int,int>,30> p;
	char c;
	for(int i=0;i<N;i++){
		cin>>p[i].first>>c>>p[i].second;
		p[i].first--;
		p[i].second--;
	}
	int cc[30]={0};
	for(int j=0;j<W;j++){
		int co=j;
		for(int i=0;i<N;i++){
			
			if(p[i].first==co){
				co=p[i].second;
			}
			else if(p[i].second==co){
				co=p[i].first;
			}
		}
		cc[co]=j;
		//cout<<co<<endl;
	}
	for(int i=0;i<W;i++){
		cout<<cc[i]+1<<endl;
	}

	return 0;
}



