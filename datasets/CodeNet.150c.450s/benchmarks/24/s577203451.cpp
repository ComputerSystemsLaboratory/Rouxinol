//

#include <iostream>
#include <utility>
#include <queue>
using namespace std;
typedef pair<int,int> P;
P a;
priority_queue< P,vector<P> > pq;
int n,m,d,p,sum;
int main(){
	while(1){
		cin >>n>>m;
		if(!(n||m))break;
		for(int i=0;i<n;i++){
			cin>> d>>p;
			a=make_pair(p, d);
			pq.push(a);
		}
		sum=0;
		//while(!pq.empty()){
		//	d=pq.top().first;
		//	p=pq.top().second;
		//	cout<<d <<" " << p<<endl;
		//	pq.pop();
		//}
		while(!pq.empty()){
			p=pq.top().first;
			d=pq.top().second;
			pq.pop();
			if(m>d){
				m-=d;
			}else{
				sum+=(d-m)*p;
				break;
			}
		}
		while(!pq.empty()){
			sum+=pq.top().first*pq.top().second;
			pq.pop();
		}
		cout << sum<<endl;
	}
}