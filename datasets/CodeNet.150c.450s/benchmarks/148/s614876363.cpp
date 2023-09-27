#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define pb push_back
#define sx 200007
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    cout<<"AC"<<" "<<"x"<<" "<<m["AC"]<<endl;
    cout<<"WA"<<" "<<"x"<<" "<<m["WA"]<<endl;
    cout<<"TLE"<<" "<<"x"<<" "<<m["TLE"]<<endl;
    cout<<"RE"<<" "<<"x"<<" "<<m["RE"]<<endl;
    return 0;
}
