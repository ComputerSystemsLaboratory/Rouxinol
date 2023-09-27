#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<math.h>
#include<stack>
#include<sstream>
#include <typeinfo>
#include<sstream>
#include<queue>
using namespace std;



int main(){
	int N,q;//qがクオンタイム
	cin>>N>>q;
	queue<string>n;//name
	queue<int>t;//time
	vector<string>name;
	vector<int>time;
	
	for(int i=0;i<N;i++){
		string s;int a;
		cin>>s>>a;
		n.push(s);t.push(a);
	}
		int now=0;
	while(!t.empty()){
		int a=0;
		a=t.front();
		string b=n.front();
		if(a>q){//a>q今回処理が終了しない場合
			t.pop();
			n.pop();///
			a-=q;
			t.push(a);
			n.push(b);///
			now+=q;
		}
		else if(a<=q){
			t.pop();
			n.pop();///
			now+=a;
			time.push_back(now);
			name.push_back(b);
		}
	}
	for(int i=0;i<time.size();i++){
		cout<<name[i]<<" "<<time[i]<<endl;
	}
	return 0;
}