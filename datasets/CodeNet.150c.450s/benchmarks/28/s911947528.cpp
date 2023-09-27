#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
std::vector<int> v;

int getNum(int n,int k,ll p){
	ll cnt=0,sum=0;
	for(int i=0;i<k;i++){
		while(sum + v[cnt] <= p){
			sum+=v[cnt++];
			if(cnt==n) return n;
		}
		sum = 0;
	}
	return cnt;
}

int getMinP(int n,int k){
	for(int p=1;;p++){
		if(getNum(n,k,p)==n){
			return p;
		}
	}
	return 0;
}

int dfs(int n,int k, ll left, ll right){
	ll mid = (left + right ) / 2;
	// cout <<left << " " << right << endl;
	int num = getNum(n,k,mid);
	if(left>=right)	return mid;
	if(num >= n) return dfs(n,k,left,mid);
	else return dfs(n,k,mid+1,right);
}

int main(){
	int n,k,w;
	cin >> n >>k;
	for(int i=0;i<n;i++){
		cin >> w;
		v.push_back(w);
	}

	cout << dfs(n,k,0,100000*10000) << endl;

	return 0;
}