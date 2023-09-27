#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define M 1000000

int memo[M];

vector<int> getvect(int n,int L){
    vector<int> ret;

    rep(i,L){
        ret.push_back(n%10);
        n/=10;
    }

    return ret;
}

int getnum(vector<int>& a){
    int ret = 0;
    int range = 1;
    rep(i,a.size()){
        ret += range*a[a.size()-1-i];
        range*=10;
    }
    return ret;
}

int main(){
    FRONT:;

    int n,L;
    cin>>n>>L;
    if(n==0 && L==0)return 0;


    rep(i,M)memo[i]=-1;

    int ansi=-1;
    int ansj=-1;
    int counter = 0;

    while(1){

        if(memo[n]!=-1){
            printf("%d %d %d\n",memo[n],n,counter-memo[n]);
            break;
        }
        memo[n] = counter;
        counter++;

        vector<int> a = getvect(n,L);
        vector<int> b = getvect(n,L);


        sort(a.begin(),a.end());
        sort(b.begin(),b.end()); reverse(b.begin(),b.end());


        int anum = getnum(a);
        int bnum = getnum(b);

        n = bnum - anum;
    }

    goto FRONT;
}