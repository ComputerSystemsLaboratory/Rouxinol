/*AOJ 0013*/

#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){

	stack<int> data;
	queue<int> ans;

	int tmp;

	cin>>tmp;

	data.push(tmp);

	int flag = 0;
	while(cin>>tmp){

		flag = 0;

		if(tmp == 0){
			ans.push(data.top());
			data.pop();
		}
		else{
			data.push(tmp);
		}

	}
	while(ans.size()!=0){
		cout<<ans.front()<<endl;
		ans.pop();
	}

	return 0;
}