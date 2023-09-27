#include<stdio.h>
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

int n;
struct jikoku{
    int hh,hm,hs,ah,am,as;
};
bool operator<(const jikoku j1,const jikoku j2){
    if(j1.ah<j2.ah)return 1;
    if(j1.ah==j2.ah&&j1.am<j2.am)return 1;
    if(j1.ah==j2.ah&&j1.am==j2.am&&j1.as<j2.as)return 1;
    return 0;
}
bool comh(const jikoku j1,const jikoku j2){
    if(j1.hh<j2.hh)return 1;
    if(j1.hh==j2.hh&&j1.hm<j2.hm)return 1;
    if(j1.hh==j2.hh&&j1.hm==j2.hm&&j1.hs<j2.hs)return 1;
    return 0;
}
bool ok(const jikoku j1,const jikoku j2){
    if(j1.ah<j2.hh)return 1;
    if(j1.ah==j2.hh&&j1.am<j2.hm)return 1;
    if(j1.ah==j2.hh&&j1.am==j2.hm&&j1.as<=j2.hs)return 1;
    return 0;
}
vector<jikoku>vec;

int main(){
   // freopen("/Users/shitian/Downloads/2013-input.txt","r",stdin);
    while(cin>>n,n){
        vec.clear();
        for(int i=0;i<n;i++){
            jikoku j;
            char c;
            cin>>j.hh>>c>>j.hm>>c>>j.hs>>j.ah>>c>>j.am>>c>>j.as;
            vec.push_back(j);
        }
        vector<jikoku>se;
        for(int i=0;i<n;i++){
            se.push_back(vec[i]);
        }
        sort(se.begin(),se.end());
        sort(vec.begin(),vec.end(),comh);
        for(int i=0;i<n;i++){
            if(ok(*se.begin() , vec[i])){
                se.erase(se.begin());
            }
        }
        cout<<se.size()<<endl;
    }
}