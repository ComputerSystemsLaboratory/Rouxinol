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
#include <iomanip>
#include <deque>
#include <stdio.h>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;

int main(){
    
    int n; cin>>n;
    set<string> key;
    REP(i,n){
        string t; cin>>t;
        key.insert(t);
    }
    
    cin>>n;
    bool state = false;
    REP(i,n){
        string t; cin>>t;
        if(key.find(t)==key.end()){
            cout<<"Unknown "<<t<<endl;
        }else{
            if(state){
                cout<<"Closed by "<<t<<endl;
            }else{
                cout<<"Opened by "<<t<<endl;
            }
            state=!state;
        }
    }
    
    return 0;
}