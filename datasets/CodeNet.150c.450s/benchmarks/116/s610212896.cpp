#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n, k, num, max, ksum, i;
	while(true){
		cin>>n>>k;if(n==0&&k==0)break;
		queue<int> q;
		max=0;
		for(i=0;i<k;i++){
			cin>>num;
			q.push(num);
			max+=num;
			
		}
		ksum=max;
		for(i=k;i<n;i++){
			cin>>num;
			q.push(num);
			ksum -= q.front();
			q.pop();
			ksum += num;
			if(max<ksum) max = ksum;
		}
		cout<<max<<endl;
	}
	return 0;
}