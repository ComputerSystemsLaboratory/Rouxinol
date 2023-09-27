#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<sstream>
#include<stack>
using namespace std;
int main(){
	stack<int> train;
	int a;
	while(cin>>a){
		int now;
		if(a==0){
		now=train.top();
		train.pop();
		cout<<now<<endl;
		}
		else {
			train.push(a);
		}
	}
	
    return 0;
}