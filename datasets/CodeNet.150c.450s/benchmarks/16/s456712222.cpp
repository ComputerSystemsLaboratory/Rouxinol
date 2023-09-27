#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

int main (){
	char s;
	stack<int> A;
	stack<pair<int,int> > B;
	int i=0,j,ans=0,a;
	while(cin>>s){
		if(s=='\\') A.push(i);
		else if(s=='/'&&!A.empty()){
			j=A.top();A.pop();
			a=i-j;
			ans+=a;
			while(!B.empty() && B.top().first>j){
				a=a+B.top().second;
				B.pop();
			}
			B.push(make_pair(j, a));
		} 
		i++;
	}
	cout<<ans<<endl;
	vector<int> X;
	int z;
	z=B.size();
	for(int i =0;i<z;i++){
		X.push_back(B.top().second);
		B.pop();
	}
	cout<<X.size();
	for(int i =X.size()-1;i>=0;i--){
		cout<<" "<<X[i];
	}
	cout<<endl;
	return 0;
}
