#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<math.h>
	using namespace std;
	
	bool check(int a){//aが素数かどうか
		
		if(a<=1)return false;
			int s=sqrt(a);
		for(int i=2;i<=s;i++){
			if(a%i==0)return false;
		}
		return true;
	}
	
/*bool check(int a){//a画素数かどうか
		int s=sqrt(a);
		vector<int>m;//aの平方根の範囲での素数
		for(int i=1;i<=s;i++){
			if(checkOf(i))m.push_back(i);
		}
		for(int i=0;i<m.size();i++)cout<<m[i]<<" ";
		for(int i=0;i<m.size();i++){
			if(a%m[i]==0)return false;
		}
		return true;
	}*/
	
	
	
int main(){
	int n[10000];
	int N;
	cin>>N;
	int count=0;
	for(int i=0;i<N;i++)cin>>n[i];
	for(int i=0;i<N;i++){
		if(check(n[i]))count++;
	}
	cout<<count<<endl;

	return 0;
}