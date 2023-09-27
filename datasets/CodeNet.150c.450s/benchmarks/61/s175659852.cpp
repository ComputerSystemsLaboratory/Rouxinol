#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(){

	int n,a,b,c,x;
	int y[101];

	while(cin>>n>>a>>b>>c>>x&&!(n==0&&a==0&&b==0&&c==0&&x==0)){
		queue<int> q;
		int hit[10001];
		fill(hit,hit+10001,0);
		int num=0;
		for(int i = 0; i < n; i++){
			cin>>y[i];
			hit[y[i]]++;
			num++;
			q.push(y[i]);
		}
		int i=0;
		int cn=q.front();
		q.pop();
		for(i = 0; i <= 10000; i++){
			if(x==cn){
				if(q.size()==0)
					break;
				cn=q.front();
				q.pop();
				//hit[x]--;
				//num--;
			}
			x=(a*x+b)%c;
		}
		if(i==10001)
			cout<<-1<<endl;
		else
			cout<<i<<endl;
	}

	return 0;
}