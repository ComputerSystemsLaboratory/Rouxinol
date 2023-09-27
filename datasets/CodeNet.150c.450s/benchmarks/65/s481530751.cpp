#include<bits/stdc++.h>
using namespace std;

#define int long long

typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
template<class T,class U>void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>void chmax(T &t,U f){if(t<f)t=f;}

int N;
vector<string>A;

vector<string>BubbleSort(vector<string>&A){
    vector<string>B=A;
    rep(i,N){
        for(int j=N-1;j>0;j--){
            if(B[j][1]<B[j-1][1])swap(B[j],B[j-1]);
        }
    }
    return B;
}

vector<string>SelectionSort(vector<string>&A){
    vector<string>B=A;
    rep(i,N){
        int mi=i;
        for(int j=i+1;j<N;j++)if(B[mi][1]>B[j][1])mi=j;
        swap(B[i],B[mi]);
    }
    return B;
}

bool isStable(vector<string>&A,vector<string>&B){
    rep(i,B.size()){
        for(int j=i+1;j<N;j++){
            if(B[i][1]!=B[j][1])continue;
            int x,y;
            rep(k,A.size()){
                if(A[k]==B[i])x=k;
                else if(A[k]==B[j])y=k;
            }
            if(x>y)return false;
        }
    }
    return true;
}

signed main(){
    cin>>N;
    rep(i,N){
        string s;cin>>s;A.pb(s);
    }

    vector<string>B=BubbleSort(A),S=SelectionSort(A);

    rep(i,B.size()){
        if(i)cout<<" ";
        cout<<B[i];
    }cout<<endl;
    if(isStable(A,B))cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;

    rep(i,S.size()){
        if(i)cout<<" ";
        cout<<S[i];
    }cout<<endl;
    if(isStable(A,S))cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;

    return 0;
}