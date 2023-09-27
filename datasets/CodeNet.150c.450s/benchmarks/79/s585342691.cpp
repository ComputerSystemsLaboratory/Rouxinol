#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

queue<int> shuffle(queue<int>,int,int);

int main(int argc,char* argv[]){
  int n,r,p,c,val;

  while(true){
	cin >> n >> r;
	if(n == 0 || r == 0)
	  break;

	queue<int>que;
	for(int i = 1;i <= n;i++)
	  que.push(i);
	
	for(int i = 0;i < r;i++){
	  cin >> p >> c;
	  que = shuffle(que,p,c);
	}

	while(!que.empty()){
	  val = que.front();que.pop();
	}
	cout << val << endl;
  }

  return 0;
}

queue<int> shuffle(queue<int> que,int p,int c){
  queue<int> tmp;
  int n = que.size();
  for(int i = 1;i <= n;i++){
	if(i <= (n-(c+p-1)) || i > n-(p-1)){
	  que.push(que.front());
	  que.pop();
	}
	else{
	  tmp.push(que.front());
	  que.pop();
	}
  }
  while(!tmp.empty()){
	que.push(tmp.front());
	tmp.pop();
  }
  return que;
}