#include<iostream>
#include<cstring>
using namespace std;
int ball[10];
int l,r;
bool flag;
void dfs(int num,int l,int r){
	if(num==10) return ;
	if(flag) return ;
	if(ball[num]>l) dfs(num+1,ball[num],r);
	else if(ball[num]>r) dfs(num+1,l,ball[num]);
	else{
		flag=true;
		return ;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++){
			cin>>ball[j];
		}
		l=0,r=0;
		flag=false;
	    dfs(0,l,r);
		if(flag){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		} 
	}
}