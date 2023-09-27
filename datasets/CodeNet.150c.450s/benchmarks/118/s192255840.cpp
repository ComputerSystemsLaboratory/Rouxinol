#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;

int y,m,d;

int day[1024][12];
//int year;

int sum = 0;

void solve(){
    cin >> y >> m >> d;


    int count = 0;

    for(int i=1;i<y;i++){
        for(int j=1;j<=10;j++){
            count += day[i][j];
        }
    }

    for(int i=1;i<m;i++){
        count += day[y][i];
    }
    count += d;
    count -= 1;
    //cout << "count : " << count << endl;

    int ans = sum - count;
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;

    // init
    for(int i=1;i<1024;i++){
        for(int j=1;j<=10;j++){
            if(j%2==1){
                day[i][j] = 20;
            }else{
                day[i][j] = 19;
            }
        }
	if(i%3==0)
		for(int j=1;j<=10;j++){
			day[i][j] = 20;
		}
    }

    for(int i=1;i<1000;i++){
        for(int j=1;j<=10;j++){
            sum += day[i][j];
        }
    }

    //cout << sum << endl;

    rep(i,n){
        solve();
    }
}