#include<bits/stdc++.h>
using namespace std;
void solotion()
{
    int n;
    cin>>n;
    string s;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl;
    cout<<"WA x "<<mp["WA"]<<endl;
    cout<<"TLE x "<<mp["TLE"]<<endl;
    cout<<"RE x "<<mp["RE"]<<endl;
}
int main()
{
    solotion();
    return 0;
}
