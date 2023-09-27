#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define INF -1

int x[100000];
int y[100000];
int sum[100000];
int MAX,MAX2;
int sum2=0;
int sum3=0;

int main(){
	string S;
	cin>>S;
	x[0]=10000;
	for(int i=0;i<S.size();i++){
		if(S[i]=='/'){
			x[i+1]=x[i]+1;
		}
		else if(S[i]=='_'){
			x[i+1]=x[i];
		}
		else{
			x[i+1]=x[i]-1;
		}
	}
	for(int i=0;i<=S.size();i++){
		MAX=INF;
		for(int j=i;j>=0;j--){
			MAX=max(MAX,x[j]);
		}
		MAX2=INF;
		for(int j=i;j<=S.size();j++){
			MAX2=max(MAX2,x[j]);
		}
		y[i]=min(MAX,MAX2);
	}
	for(int i=0;i<=S.size();i++){
		if(sum[sum2]>=1 && y[i]-x[i]==0){
			sum3 += sum[sum2];
			sum2++;
		}
		else{
			sum[sum2] += y[i]-x[i];
		}
	}
	cout<<sum3<<endl;
	cout<<sum2;
	for(int i=0;i<sum2;i++){
		cout<<' '<<sum[i];
	}
	cout<<endl;
	return 0;
}