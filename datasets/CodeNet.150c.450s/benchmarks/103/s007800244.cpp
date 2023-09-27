//AOJ Problem0030

#include<iostream>
#include<vector>

using namespace std;

int ans;

void solve(int n,int s,int m,int sum,int max){//n:何個か s:目的値 m:何回目か sum:現在の合計 max:最大の足した数
	
	if(m>n || sum>s){
		return;
	}

	else if(n==m && sum==s){
		ans++;
		return;
	}

	else{
		for(int i=max+1;i<=9;i++){
		
			solve(n,s,m+1,sum+i,i);
		}
	}
}

int main(){

	int n,s;

	vector<int> dataN;
	vector<int> dataS;

	for(;;){
		cin>>n;
		cin>>s;
		if(n==0&&s==0){
			break;
		}
		dataN.push_back(n);
		dataS.push_back(s);
	}
	for(int j=0;j<dataN.size();j++){

		ans=0;

		for(int i=0;i<=9;i++){
			solve(dataN[j],dataS[j],1,i,i);
		}

		cout<<ans<<endl;
	}

	return 0;
}