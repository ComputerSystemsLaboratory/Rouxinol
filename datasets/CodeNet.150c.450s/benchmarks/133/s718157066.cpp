#include <bits/stdc++.h>
#define rep(i,s,n) for(int i=s;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define all_acc(x) (x).begin(),(x).end(),0LL
#define int long long
using namespace std;
using P=pair<int,int>;
using Graph=vector<vector<int>>;
using ll=long long;

void output(vector<int> s){
    int n=s.size();
    for(int i=0;i<n;i++){
        //if(i!=0) cout<<" ";
        cout<<s[i]<<endl;
    }
    //cout<<endl;
}


int D,score;
vector<int> c(27);
vector<int> last_day(27);
vector<vector<int>> s(D,vector<int>(27));

int unpresure(int d,int i){
    return c[i]*(d-last_day[i]);
}

void day(int d,int i){
    score+=s[d][i];
    last_day[i]=d;
    for(int j=1;j<=26;j++){
        score-=unpresure(d,j);
    }
}

signed main(){ 
   cin>>D; score=0;
   last_day.assign(27,0);
   s.assign(D+1,vector<int>(27));


   for(int i=1;i<=26;i++) cin>>c[i];

   for(int i=1;i<=D;i++){
       for(int j=1;j<=26;j++){
           cin>>s[i][j];
       }
   }

   vector<int> v;
   for(int i=1;i<=D;i++){
       int ti; cin>>ti;
       day(i,ti);
       v.push_back(score);
   }

   output(v);

}  