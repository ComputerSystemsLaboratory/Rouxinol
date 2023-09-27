#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#ifdef Debug
#define dump(x)  cerr << #x << " = " << (x) << endl
#else
#define dump(x)
#endif




int main(){
	int h,w;
	while(cin>>h>>w){
		if(h==0 && w==0)break;
		int a=9999,b=9999;

		for(int i=1;i<=150;i++){
			for(int j=i+1;j<=150;j++){
				if(h*h+w*w<i*i+j*j || (h*h+w*w==i*i+j*j && h<i )){
					if(i*i+j*j<a*a+b*b || ( i*i+j*j==a*a+b*b && i<a )){
						a=i;b=j;
					}
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}