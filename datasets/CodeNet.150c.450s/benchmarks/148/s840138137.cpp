#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define T int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define PI 3.141592653589793238462643383


int main (){
    fast;
    int ac = 0,tle = 0,re = 0,wa = 0;
    T{
        string s;
        cin>>s;

        if(s == "WA") wa++;
        else if(s == "AC") ac++;
        else if(s == "TLE") tle++;
        else re++;
    }
    cout<<"AC x "<<ac<<endl;
    cout<<"WA x "<<wa<<endl;
    cout<<"TLE x "<<tle<<endl;
    cout<<"RE x "<<re<<endl;
    


}









