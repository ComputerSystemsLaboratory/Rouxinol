#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int n;
vector<int>vec;
void input();

void solve(){
    unordered_map<int,int>f;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                int res = i*i+j*j+k*k+i*j+j*k+i*k;
                f[res]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<f[i]<<"\n";
    }
}

void Clear(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    solve();
    Clear();
}

void input(){
    cin>>n;

}
