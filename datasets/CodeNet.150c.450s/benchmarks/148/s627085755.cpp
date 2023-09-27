#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N,AC,WA,TLE,RE;
    cin>>N;
    string s;
    AC = WA = TLE = RE = 0;

    for(int i=0;i<N;i++){
        cin>>s;
        if(s == "AC")AC++;
        if(s == "WA")WA++;
        if(s == "TLE")TLE++;
        if(s == "RE")RE++;
    }

    cout<<"AC x "<<AC<<endl;
    cout<<"WA x "<<WA<<endl;
    cout<<"TLE x "<<TLE<<endl;
    cout<<"RE x "<<RE<<endl;

    return 0;

}