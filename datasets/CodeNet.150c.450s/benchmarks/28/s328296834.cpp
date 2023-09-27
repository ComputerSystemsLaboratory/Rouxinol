#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>

#define SIZE 9

using namespace std;

int n;
int k;
int w[100001];
int mid;

bool check(int high,int low){
	mid = (high+low)/2;
	int tmp = 1;
	int weight = 0;
	for(int i=0;i<n;i++){
		if(weight+w[i] > mid){
			if(w[i]>mid) return false;
			tmp++;
			if(tmp > k) return false;
			weight = 0;
		}
		weight += w[i];
	}
	return true;
}

int main(){
	int p;
	int low,high;

	cin>>n>>k;
	for(int i=0; i<n; i++) cin>>w[i];
	low = 0;
	high = 900000000;
	while(high-low > 1){
		if(check(high,low)) high=mid;
		else low = mid;
	}
	p = high;
	cout<<p<<endl;
	return 0;
}