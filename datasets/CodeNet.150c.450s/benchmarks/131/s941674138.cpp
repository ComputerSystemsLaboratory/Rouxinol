#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,l;
	while(cin>>n>>l,n,l){
		bool f=false;
		int s1,s2;
		vector<int> data;
		data.push_back(n);
		for(int times=0;times<20;times++){
			int num=data[times];
			vector<int> a;
			for(int i=0;i<l;i++){
				a.push_back(num%10);
				num/=10;
			}
			sort(a.begin(),a.end());
			num=0;
			int k=1;
			for(int i=0;i<l;i++){
				num+=(a[i]-a[l-i-1])*k;
				k*=10;
			}
			for(int i=0;i<data.size();i++){
				if(num==data[i]){
					cout<<i<<" "<<num<<" "<<data.size()-i<<endl;
					f=true;
					break;
				}
			}
			if(f)break;
			data.push_back(num);
		}
	}
}