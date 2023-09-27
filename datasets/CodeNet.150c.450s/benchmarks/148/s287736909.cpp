#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    while(n--){
        string s;
        cin>>s;

        if(s=="AC")
            a++;
        else if(s=="WA")
            b++;
        else if(s=="TLE")
            c++;
        else
            d++;
    }

    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<b<<endl;
    cout<<"TLE x "<<c<<endl;
    cout<<"RE x "<<d<<endl;
}
