#include <bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>
#define _USE_MATH_DEFINES
#define ll long long int
using namespace std;
//mp.reserve(1024);
//mp.max_load_factor(0.25);
bool sortit(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return (a.first -a.second > b.first-b.second);
}

int main()
{
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	cout.tie(NULL);
    // freopen("mr_x_input.txt", "r", stdin);
    //freopen("output1.txt", "w", stdout);
	ll n;
	cin>>n;
	vector<ll>v(10050);
	for(ll i=1;i<=105;i++){
		for(ll j=1;j<=105;j++){
			for(ll z=1;z<=105;z++){
				ll temp =i*i+j*j+z*z+i*j+i*z+z*j;
				if(temp<10050){
					v[temp]+=1;
				}
			}
		}
	}
	for(ll i=1;i<=n;i++){
		cout<<v[i]<<endl;
	}
  	return 0;
}
