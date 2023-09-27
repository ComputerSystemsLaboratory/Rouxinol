
#include <iostream>
#include <utility>
#include <queue>
using namespace std;
typedef pair<int,int> P;
P a;
priority_queue< int > pq;
int n;
string s;
int main(){
	while(1){
		cin >>s;
		if(s=="insert"){
			cin >>n;
			pq.push(n);
		}else if(s=="extract"){
			cout <<pq.top() <<endl;
			pq.pop();
		}else if(s=="end"){
			break;
		}

	}
}