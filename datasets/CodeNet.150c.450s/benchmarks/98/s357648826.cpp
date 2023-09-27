#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<iomanip>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

typedef struct{
	int tarou;
	int hanako;
}two_point;

int main(){

	while(true){
		int t_p,h_p;
		int t_sum=0,h_sum=0;
		int t_a,h_a;

		cin >> t_p >> h_p;

		if(t_p==0&&h_p==0) break;

		int t[t_p],h[h_p];

		for(int i=0;i<t_p;i++){
			cin >> t[i];
			t_sum+=t[i];
		}
		for(int i=0;i<h_p;i++){
			cin >> h[i];
			h_sum+=h[i];
		}

		int answer = 10000;

		for(int i=0;i<t_p;i++){
			for(int j=0;j<h_p;j++){
				int ans = h[j]-t[i];	
				if(h_sum-ans == t_sum+ans){
					if(t[i]+h[j]<answer){
						
						t_a=t[i];
						h_a=h[j];
						answer=t_a+h_a;
					}
				}
			}
		}
		if(answer==10000){
			cout << -1 << endl;
		}else{
			cout << t_a << " " << h_a << endl;
		}

	}
	
}