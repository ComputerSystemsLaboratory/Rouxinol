#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

#define INF 100000000


int main(){
	int table1[201]={};
	vector<int> table2;
	for(int i=1;i<201;i++){
		table1[i-1]=i*(i+1)*(i+2)/6;
		if(table1[i-1]%2!=0){
			table2.push_back(table1[i-1]);
		}
	}
	int count1[1000001];
	int count2[1000001];
	for(int i=0;i<1000001;i++){
		count1[i]=INF;
		count2[i]=INF;
	}
	count1[0]=0;
	count2[0]=0;
	count1[1]=1;
	count2[1]=1;
	for(int i=2;i<1000001;i++){
		for(int j=0;j<201;j++){
			if(table1[j]>i)break;
			count1[i] = min(count1[i],count1[i-table1[j]]+1);
		}
	}
	for(int i=2;i<1000001;i++){
		for(int j=0;j<201;j++){
			if(table2[j]>i)break;
			count2[i] = min(count2[i],count2[i-table2[j]]+1);
		}
	}
	int n;
	while(cin>>n&&n!=0){
		cout << count1[n] << " " << count2[n] << endl;
	}
	return 0;
}