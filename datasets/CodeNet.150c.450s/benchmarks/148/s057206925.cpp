#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++){
        cin>>S.at(i);
    }
    // cout<<S.at(0)<<endl;
    map<string,int> mp;
    for(int i=0;i<N;i++){
        mp[S.at(i)]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl;
    cout<<"WA x "<<mp["WA"]<<endl;
    cout<<"TLE x "<<mp["TLE"]<<endl;
    cout<<"RE x "<<mp["RE"]<<endl;
}