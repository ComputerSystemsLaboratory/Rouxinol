#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	priority_queue<int> pq;
	string s;
	int k;
	while(cin>>s){
		if(s[0]=='i'){
			cin>>k;
			pq.push(k);
		}else if(s=="extract"){
			cout<<pq.top()<<endl;
			pq.pop();
		}else if(s=="end"){
			break;
		}
	}
	return 0;	
}
