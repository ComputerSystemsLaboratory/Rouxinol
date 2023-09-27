#include <iostream>

using namespace std;

int main(){
	int w,n;
	cin>>w>>n;

	int nums[w];
	for(int i=0;i<w;i++){
		nums[i]=i+1;
	}

	for(int i=0;i<n;i++){
		int a1,b1;
		char dummy;
		cin>>a1>>dummy>>b1;
		a1--;b1--;
		int tmp=nums[b1];
		nums[b1]=nums[a1];
		nums[a1]=tmp;
	}

	for(int i=0;i<w;i++){
		cout<<nums[i]<<"\n";
	}
	return 0;
}