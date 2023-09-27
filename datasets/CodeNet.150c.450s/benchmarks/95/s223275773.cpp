 #include<bits/stdc++.h>
 using namespace std;
#define INF 1000000000
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
typedef long long LL;
int N;
int main(){
    while(cin>>N,N){
       vector<string>v;
       REP(i,N){
           string s;
           cin>>s;
           v.push_back(s);
       }
       int ans=0;
       REP(i,N/2){
           if(v[2*i]=="lu"&&v[2*i+1]=="ru")ans++;
           if(v[2*i]=="ru"&&v[2*i+1]=="lu")ans++;
           if(v[2*i]=="ld"&&v[2*i+1]=="rd")ans++;
           if(v[2*i]=="rd"&&v[2*i+1]=="ld")ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}