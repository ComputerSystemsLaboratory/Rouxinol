#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    map<string,int> m;
    m.insert({"AC",0});
    m.insert({"WA",0});
    m.insert({"TLE",0});
    m.insert({"RE",0});
    for(int i=0;i<n;i++)
    {
        cin>>str;
        m[str]++;
    }
    
    
    
        cout<<"AC"<<" "<<"x"<<" "<<m["AC"]<<"\n";
        cout<<"WA"<<" "<<"x"<<" "<<m["WA"]<<"\n";
        cout<<"TLE"<<" "<<"x"<<" "<<m["TLE"]<<"\n";
        cout<<"RE"<<" "<<"x"<<" "<<m["RE"]<<"\n";

    return 0;
}