#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

int main(){
	int key;
	string order;
	priority_queue<int> pq;
	while(1){
		cin>>order;
		if(order=="insert"){
			cin>>key;
			pq.push(key);
		}else if(order=="extract"){
			cout<<pq.top()<<endl;
			pq.pop();
		}else{
			break;
		}
	}
}