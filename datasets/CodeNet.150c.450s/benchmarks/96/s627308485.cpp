#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <cstdio>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;


string table[10]={
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

int mod[10]={1,5,3,3,3,3,3,4,3,4};


int main(){
    
    int N;
    cin>>N;
    
    REP(i,N){
        string S;
        cin>>S;
        
        int cnt=0;
        string ans;
        
        REP(i,S.size()){
            if(S[i]!='0')cnt++;
            else{
                if(cnt!=0){
                    ans=ans+table[S[i-1]-'0'][(cnt-1)%mod[S[i-1]-'0']];
                    cnt=0;
                }
            }
        }
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}