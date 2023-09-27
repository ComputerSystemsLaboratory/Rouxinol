#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,ac=0,wa=0,tle=0,re=0;
    string b;
    cin>>a;
    for(int i = 1;i<=a;i++){
        cin>>b;
        if(b == "AC"){
            ac++;
        }
        else if(b == "WA"){
            wa++;
        }
        else if(b == "TLE"){
            tle++;
        }
        else {
            re++;
        }
    }
    cout<<"AC x "<<ac<<endl;
    cout<<"WA x "<<wa<<endl;
    cout<<"TLE x "<<tle<<endl;
    cout<<"RE x "<<re<<endl;

    return 0;
}