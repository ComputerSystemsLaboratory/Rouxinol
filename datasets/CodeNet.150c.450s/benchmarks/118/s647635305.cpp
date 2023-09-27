#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

// return how many days passed from 1/1/1
int compute(int y, int m, int d){
    int cnt = 0;
    int b_years = (y-1)/3;
    int s_years = (y-1) - b_years;
    cnt += b_years*200 + s_years*195;

    if(y%3==0){
        cnt += (m-1)*20;
    }else{
        int s_months = (m-1)/2;
        int b_months = (m-1) - s_months;
        cnt += s_months*19 + b_months*20;
    }
    cnt += (d-1);
    return cnt;
}

int main(){
    int n,y,m,d;
    cin >> n;
    REP(k,n){
        cin >> y >> m >> d;
        cout << compute(1000,1,1) - compute(y,m,d) << endl;
    }
    return 0;
}