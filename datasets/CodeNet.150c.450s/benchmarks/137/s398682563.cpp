#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<unordered_set>
#define ll long long
#define pb push_back
#define rep(i,n) for (int i=0;i<n;i++)
#define INF 1e9+7
#define vec vector<int>

using namespace std;


int main() {
    int n;
    cin >> n;
    unordered_set<string>st;
    rep(i,n){
        string str1,str2;
        cin >>str1>>str2;
        if (str1=="insert") st.insert(str2);
        else {
            cout<<(st.count(str2)? "yes":"no")<<endl;
        }
    }
}
