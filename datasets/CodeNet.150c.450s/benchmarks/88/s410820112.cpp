#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
typedef pair<ll,mp> mmp;
ll inf =  1e9;


int main(){
    vector<mmp> a;
    for(int i=1;i<=150;i++){
	for(int j=1;j<i;j++){//h
	    a.push_back( mmp( i*i+j*j, mp( j,i ) ) );
	}
    }
    sort( a.begin() , a.end() );
    while(1){
	int h,w;
	cin>>h>>w;
	if(h == 0)break;
	mmp now = mmp( h*h + w*w ,mp( h,w ) );
	auto it = upper_bound(a.begin(),a.end(), now );
	mp res = it->second;
	cout<<res.first<<' '<<res.second<<endl;
	     
    }
    return 0;
}

