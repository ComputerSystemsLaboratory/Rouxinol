#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <string>
using namespace std;

struct pp{
	char name[11];
	int T;
};

int main(){
	int n,q;
	cin>>n>>q;
	
	pp array[100000];
	queue<int> a;
	
	for(int i=0 ; i<n ; i++){
		cin>>array[i].name>>array[i].T;
		a.push(i);
	}
	
	int tsum = 0;
	
	while(!a.empty()){
		int i = a.front();
		a.pop();
		int tmp = array[i].T-q;

		tsum += min(array[i].T, q);

		if(tmp > 0){
			array[i].T -= q;
			a.push(i);
		}else{
			printf("%s %d\n",array[i].name,tsum);
		}
	}
	
	return 0;
}