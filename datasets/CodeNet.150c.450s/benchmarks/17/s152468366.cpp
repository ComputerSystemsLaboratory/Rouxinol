#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int number;

int main(){
	vector<int> v;
 
	for(int i=0;i<5;i++){
		cin >> number;
		v.push_back(number);
	}

	sort(v.begin(), v.end(),greater<int>() );

	for(int i=0;i<5;i++){
		if(i<4){
			printf("%d ",v[i]);
		}else{
			printf("%d\n",v[i]);
		}
	}
}