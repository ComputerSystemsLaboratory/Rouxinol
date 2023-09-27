#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,ac=0,wa=0,tle=0,re=0;
    cin>>n;
    string s;
    for(int i=0;i<n;++i){
        cin>>s;
        if(s=="AC") ac++;
        else if(s=="WA") wa++;
        else if(s=="TLE") tle++;
        else {
            re++;
        }
    }
    cout<<"AC"<<" x "<<ac<<endl;
    cout<<"WA"<<" x "<<wa<<endl;
    cout<<"TLE"<<" x "<<tle<<endl;
    cout<<"RE"<<" x "<<re<<endl;
    return 0;
}