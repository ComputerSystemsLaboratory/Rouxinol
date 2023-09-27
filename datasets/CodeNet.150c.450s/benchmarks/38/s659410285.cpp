#include<iostream>
#include<queue>
using namespace std;
priority_queue<int> q1;
int main(){
	int a,b,c,d,n;
	int i,j,k;
	bool s[1005];
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cin>>a;
			q1.push(a);
		}
		a=q1.top();
		q1.pop();
		b=q1.top();
		q1.pop();
		c=q1.top();
		q1.pop();
		if(a*a==b*b+c*c){
			s[i]=true;
		}else{
			s[i]=false;
		}
	}
	for(i=0;i<n;i++){
		if(s[i]==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}