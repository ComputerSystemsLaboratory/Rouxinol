#include <bits/stdc++.h>
using namespace std ;

#define ll long long int

int main()
{
    int n;
    cin>>n;
    int t;
    t=n;

    int a=0, b=0, c=0, d=0;
    while(t--){
        string s;
        cin>>s;
        if(s=="AC"){
            a++;
        }
        if(s=="WA"){
            b++;
        }
        if(s=="TLE"){
            c++;
        }
        if(s=="RE"){
            d++;
        }

    }
    cout<<"AC"<<" " <<'x'<<" "<<a<<endl;
    cout<<"WA"<<" " <<'x'<<" "<<b<<endl;
    cout<<"TLE"<<" " <<'x'<<" "<<c<<endl;
    cout<<"RE"<<" " <<'x'<<" "<<d<<endl;
    return 0;
}

