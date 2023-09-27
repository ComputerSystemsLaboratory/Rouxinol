#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>M;
    string in,ma,ma2;
    while(cin>>in){
        M[in]++;
        if(ma.size()<in.size())ma=in;
    }
    int ma3=0;
    for(map<string,int>::iterator it=M.begin();it!=M.end();it++){
        if(ma3<it->second){
            ma3=it->second;
            ma2=it->first;
        }
    }
    cout<<ma2<<" "<<ma<<endl;

    return 0;
}