#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int num[101]={},a;
	while(cin>>a)num[a]++;
	int m=0;
	queue<int> que;
	for(int i=1;i<=100;i++){
		if(num[i]>m){
			m=num[i];
			while(!que.empty())que.pop();
			que.push(i);
		}else if(num[i]==m){
			que.push(i);
		}
	}
	while(!que.empty()){
		cout<<que.front()<<endl;
		que.pop();
	}
    return 0;
}