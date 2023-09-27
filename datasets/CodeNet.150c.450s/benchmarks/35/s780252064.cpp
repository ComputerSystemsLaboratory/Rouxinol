#include <algorithm>
#include <iostream>
using namespace std;
int a[5010];
int main(){
	int i,n,max_so_far,max_ending_here,amax;//maximum subarray problem
	cin>>n;
	while(n!=0){

		for(i=0;i<n;i++){
			cin>>a[i];
		}

		max_ending_here=0;
		max_so_far=0;
		amax=-100000;

		for(i=0;i<n;i++){
			max_ending_here = max(0,max_ending_here + a[i]);
			max_so_far = max(max_so_far,max_ending_here);
			amax = max(amax,a[i]);
		}

	if(amax < 0){cout << amax <<endl;}
	else{cout << max_so_far << endl;}
	cin>>n;//kousinn
	}
}