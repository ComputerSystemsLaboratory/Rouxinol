#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int min(int a,int b){
	if(a>=b)return b;
	else return a;
}

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void babbleSort(int *data,int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(data[j]>=data[j-1]){
				swap(&data[j],&data[j-1]);
			}
		}
	}
}


using namespace std;

/*
cin.ignore();
	getline(cin,dataStr);
	data = new int[n];
	stringToInteger(&dataStr,data,n);
*/

void stringToInteger(string *str,int *data,int n){
	for(int i=1;i<=n;i++){
		int spaceN = str->find(' ',0);

		data[i] = atoi(str->substr(0,spaceN).c_str());
		str->erase(0,spaceN+1);
	}
}

int main(){

	int n;
	int *a;

	int ans[5001];
	int cnt=0;

	while(1){
	cin>>n;

	if(n==0)break;
	a = new int[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=-10000000;
	int before=0;
	int now=0;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(j==i){
				before=a[j];
				now=before;
			}
			else{
				now=before+a[j];
			}
			
			if(max<=now){
				max = now;
	
			}
			before=now;
		}
	}
	ans[cnt]=max;
	//cout<<max<<endl;
	cnt++;

	}
	for(int i=0;i<cnt;i++){
		cout<<ans[i]<<endl;
	}


	return 0;
}