#include<iostream>
using namespace std;

int function(int p);

int n,k,*weight;
const long long Max = 1000000000;

int main(){
	cin>>n>>k;
	weight = new int[n];
	for(int i=0;i<n;i++) cin>>weight[i];

	int p, right = Max, left = 0;

	while(left<right){
		p = (right+left)/2;
		if( function(p)<n ) left = p+1;
		else right = p;
		if(right==left) p = (right+left)/2;
	}


	//for(p=0;;p++)
	//	if(function(p)>=n) break;

	cout<<p<<endl;

	delete [] weight;
	cin.sync(); cin.get();
}

int function(int p){
	int count = 0, sum = 0, i = 0, v = 0;
	while(count<k){
		sum += weight[i];
		if(sum>p){
			count++;
			sum = 0;
		}else if(sum==p){
			count++; v++; i++;
			sum = 0;
		}else{
			v++; ++i;
		}
		if(i==n) break;
	}
	return v;
}