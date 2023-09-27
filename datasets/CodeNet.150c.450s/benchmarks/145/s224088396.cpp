#include<map>
#include<iostream>
using namespace std;
int main(){
    map<string,int> sm;
    string in,freq,len;
    int maxfreq=0,maxlen=0;
    while(!cin.eof()){
       cin>>in;
       sm[in]++;
    }
    sm[in]--;
    for(map<string,int>::iterator it=sm.begin();it!=sm.end();it++){
        if(it->second>maxfreq){
            maxfreq=it->second;
            freq=it->first;
        }
        if(it->first.size()>maxlen){
            maxlen=it->first.size();
            len=it->first;
        }
    }
    cout<<freq<<" "<<len<<endl;
}