#include <bits/stdc++.h>
using namespace std;

int sumNum(string n){
	int sum=0;
	for(int i=0;i<=n.size();i++){
		sum+=atoi(n.substr(i,1).c_str());
	}
	return sum;
}
 
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int i=0;
	while(true){
		string n;
		cin>>n;
		if(n=="0"){
			break;
		}
		cout<<sumNum(n)<<endl;
	}
    return 0;
}