#include <iostream>
#include <algorithm>
using namespace std;

int n,k;
long long int search(int w[],int left,int right){
	int mid;
	int truck;
	int weight;
	while(right-left>3){
		mid=(right+left)/2;
		truck=1;//何台目か
		weight=0;//トラックに載っている荷物の重さ
		for(int i=0;i<n;i++){
			if(w[i]>mid){
				truck=1000000;
				break;
			}
			else if(weight+w[i]>mid){
				truck++;
				weight=w[i];
			}
			else	weight+=w[i];
			if(weight==mid&&i!=n-1){
				truck++;
				weight=0;
			}
		}
		if(truck>k)	left=mid-1;
		else 	right=mid+1;
	}
	/*ここから線形探索*/
	for(mid=right;mid>=left;mid--){
		truck=1;
		weight=0;
		for(int i=0;i<n;i++){
			if(w[i]>mid){
				truck=1000000;
				break;
			}
			else if(weight+w[i]>mid){
				truck++;
				weight=w[i];
			}
			else	weight+=w[i];
			if(weight==mid&&i!=n-1){
				truck++;
				weight=0;
			}
		}
		if(truck>k){
			break;
		}
	}
	return mid+1;
}
		

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin>>n>>k;
	int w[n];
	int sum=0,min=100000;
	for(int i=0;i<n;i++){
		cin>>w[i];
		sum+=w[i];
		min=min<w[i]?min:w[i];
	}
	cout<<search(w,min,sum)<<endl;
	return 0;
}