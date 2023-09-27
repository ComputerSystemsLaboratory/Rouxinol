#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>

#define SIZE 9

using namespace std;

int main(){
	int N,M;
	int total;
	int d,p;
	pair<int,int>pd[10000+1];
	while(cin>>N>>M,N){
		total = 0;
		for(int i=0; i<N; i++){
			cin>>d>>p;
			pd[i] = make_pair(p,d);
			total += p*d;
		}
		sort(pd,pd+N);
		reverse(pd,pd+N);
		for(int i=0; i<N; i++){
			if(pd[i].second > M){
				total -= M*pd[i].first;
				break;
			}else{
				M -= pd[i].second;
				total -= pd[i].first*pd[i].second;
			}
		}
		cout<<total<<endl;
	}
	return 0;
}