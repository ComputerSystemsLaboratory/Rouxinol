#include<bits/stdc++.h>

#define ms(a,x) memset(a,x,sizeof(a))
using namespace std;

#define N 200
#define MAX 2000000

typedef long long ll;

int main(){
	char com[20];
	priority_queue<int>PQ;
	
	while(1){
		scanf("%s",com);
		if(com[0]=='i'){
			int key;
			scanf("%d",&key);
			PQ.push(key);
		}
		else if(com[1]=='x'){
			cout<<PQ.top()<<endl;
			PQ.pop();
		}
		else if(com[0]=='e'){
			break;
		}
	}
	return 0;
}


