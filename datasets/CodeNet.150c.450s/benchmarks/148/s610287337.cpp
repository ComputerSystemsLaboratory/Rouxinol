#include<iostream>
#include<string>
using namespace std;
int main(){
    string c;
    int n,ac=0,wa=0,tle=0,re=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=="AC")ac++;
        if(c=="WA")wa++;
        if(c=="TLE")tle++;
        if(c=="RE")re++;
    }
    cout<<"AC x "<<ac<<endl<<"WA x "<<wa<<endl<<"TLE x "<<tle<<endl<<"RE x "<<re<<endl;
    return 0;
}