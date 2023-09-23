#include <iostream>
#include <limits.h>
using namespace std;

#define MAX_DATA 200000

int GetMProfit(int[],int);

int main(){

	int i,n,data[MAX_DATA];
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>data[i];
	}
	
	cout<<GetMProfit(data,n)<<endl;

	return 0;
	
}

int GetMProfit(int data[],int n){

	int i,suspend,maxP=INT_MIN;
	
	suspend=data[0];
	
	for(i=1; i<n; i++){
		if(data[i]-suspend>maxP){
			maxP=data[i]-suspend;
		}
		if(suspend>data[i]){
			suspend=data[i];
		}
	}

	return maxP;

}