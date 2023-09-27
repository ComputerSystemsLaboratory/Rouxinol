#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int solve(int y, int m, int d){
    int sum = 0;
    sum+= d - 1;

    if(y % 3){
        while(m != 1){
            if((m - 1) % 2 == 1) sum+= 20;
            else sum+= 19;
            m--;
        }
    }else{
        sum+= (m - 1) * 20;
    }

    int thirdYear = (y - 1) / 3;
    y-= thirdYear + 1;

    sum+= thirdYear * 20 * 10;
    sum+= y * (20 * 5 + 19 * 5);
    return sum;
}

int main(){
    int n;
    while(cin >> n){
        rep(i,n){
            int y, m, d, days = 196470;
            cin >> y >> m >> d;
            cout << days - solve(y,m,d) << endl;
        }
    }
}