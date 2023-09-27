#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main(){
vector<int>a;
int n,s=0,b=0;long sum=0;
cin>>n;int nnn;
if(n>0){
	for(int i=0;i<n;i++){cin>>nnn;a.push_back(nnn);}
		 s=a[0],b=a[0];
		for(int i=0;i<a.size();i++){
			sum+=a[i];
			b=max(b,a[i]);
			s=min(s,a[i]);
		}
	cout<<s<<" "<<b<<" "<<sum<<endl;
		}
	else{
		printf("%d %d %d\n",s,b,sum);
		}
return 0;
}