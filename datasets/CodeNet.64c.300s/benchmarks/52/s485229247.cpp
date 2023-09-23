#include<iostream>
#include<vector>
using namespace std;
int saiki(int,int,int,int);
int n,s,cnt=0;
int main(){
	while(1){
		cin>>n>>s;
		if(n==0&&s==0)break;
		saiki(0,0,-1,10);
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
int saiki(int i,int sum,int mae,int last){
	if(i==n)return sum;
	for(int j=mae+1;j<=(last<=9?last:9);++j){
		if(saiki(i+1,sum+j,j,s-(sum+j))==s)cnt++;
	}
	return -1;
}
