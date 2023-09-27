#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool era[10000000]={false};
 
 
void makeERA(){
    for(int i=2;i<1000001;i++){
        if(era[i]!=true)continue;
        for(int j=2;;j++){
            if(i*j<=1000000)
                era[i*j]=false;
            else break;
        }
    }
    era[2]=true;
}
int main(){
    rep(i,10000000)era[i]=true;
    era[0]=false;era[1]=false;
	makeERA();
	int n;
	while(cin>>n){
		if(n==0)break;

		int sum=0;

		rep(i,n+1){
			if(era[i])sum++;
		}
		cout<<sum<<endl;
	}
}