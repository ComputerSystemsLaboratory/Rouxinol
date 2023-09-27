#include<iostream>
#include<algorithm>
using namespace std;

int n,k,w[100000];

//?????????P???????????????k??°?????¨?????????????????????????????????
int loadNum(int P){
	int l_num=0,t_num=0,t=0;
	for(int i=0;i<n;i++){
		if(w[i] > P){
			return l_num;
		}else if((w[i] + t) > P){
			t = w[i];
			t_num++;
			if(t_num == k) return l_num;
		}else{
			t += w[i];
		}
		l_num++;
	}
	return n;
}

int binarySearch(){
	int left=0,right=1000000000;
	while(right-left>1){
		int mid = (left + right)/2;
		if(loadNum(mid) < n){
			left = mid;
		}else{
			right = mid;
		}
	}
	return right;
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int ans;
	ans = binarySearch();
	cout<<ans<<endl;
	return 0;
	
}