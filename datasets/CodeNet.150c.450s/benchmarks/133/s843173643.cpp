#include<iostream>
#include<vector>
using namespace std;

class Contest{
public:
    Contest(){
        last=0;
    }
    int s[366];
    int c;
    int last;
};

int main(){
    int d;
    cin>>d;
    Contest contest[27];
    for(int i=1;i<=26;++i){
        int t;
        cin>>t;
        contest[i].c=t;
    }
    for(int day=1;day<=d;++day){
        for(int type=1;type<=26;++type){
            int t;
            cin>>t;
            contest[type].s[day]=t;
        }
    }
    
    int v[365];
    v[0]=0;
    for(int day=1;day<=d;++day){
        v[day]=0;
        int type;
        cin>>type;
        v[day]+=contest[type].s[day];
        contest[type].last=day;
        for(int t=1;t<=26;++t){
            v[day]-=contest[t].c*(day-contest[t].last);
        }
        v[day]+=v[day-1];
    }

    for(int i=1;i<=d;++i) cout<<v[i]<<endl;
}