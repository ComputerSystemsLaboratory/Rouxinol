#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>
using namespace std;

typedef pair<int,int> pii; // expectation,distance

int main(void){
	int N,M;
	int a,b;
	std::priority_queue<pii,vector<pii>,less<pii> > root;
	while(cin>>N>>M,N||M){
		for(int i=0;i<N;i++){
			cin>>a>>b;
			root.push(std::make_pair(b,a));
		}
		while(!root.empty()&&M>0){
			pii a=root.top();root.pop();
			if(M>=a.second){
				M-=a.second;
			}else{
				a.second-=M;
				root.push(a);
				M=0;
			}
		}
		int k=0;
		while(!root.empty()){
			pii a=root.top();root.pop();
			k+=a.first*a.second;
		}
		cout<<k<<endl;
	}
	return 0;
}