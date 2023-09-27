#include<string>
#include<iostream>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<queue>
#include<algorithm>

using namespace std;

struct PAIR {
    string   first;
    int second;
};

int main(){
	int number;
	scanf("%d",&number);
	int qu;
	scanf("%d",&qu);
	queue<PAIR> Q;
	
	string name; 
	int t;
	for(int i=0;i<number;i++){
		cin >> name >> t;
		PAIR d;
		d.first=name;
		d.second=t;
		Q.push(d);
		}
	
	int time=0;
	while(!Q.empty()){
		if(Q.front().second<= qu) {
			PAIR c=Q.front();
			Q.pop();
			int elapse=c.second+time;
			cout << c.first<<" "<< elapse << endl;
			time+=c.second;
		}
		else{
			PAIR c=Q.front();
			Q.pop();
			c.second-= qu;
			Q.push(c);
			time +=  qu;
			}
		}
	return 0;
}