#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>

typedef long long ll;
using namespace std;

typedef pair<int,int> P;

int main()
{

	int a;
	map<int,int> num;
	queue<int> que;
	while(~scanf("%d",&a)){
		num[a]++;
	}

	int max_freq = -1;

	for(map<int,int>::iterator it=num.begin(); it != num.end(); it++){
		if(it->second == max_freq){
			que.push(it->first);
		}
		else if(it->second > max_freq){
			while(!que.empty()){
				que.pop();
			}
			max_freq = it->second;
			que.push(it->first);
		}
		
	}

	while(!que.empty()){
		cout << que.front() << endl;
		que.pop();
	}

}