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
#define FILL(Itr,n) fill((Itr).begin(),(Itr).end(),n)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
#define MOD 1000000007
typedef long long ll;
typedef pair<int,int> P;

template <class T> class RangeSumQuery {
    vector<T> bit_sum; int size;
public:
    RangeSumQuery(int n):size(n+1),bit_sum(n+10,0){}
    void add(int i, T x){
        while(i<=size){
            bit_sum[i]+=x;
            i+=i&-i;
        }
    }
    T acc(int i){
        T ret=0;
        while(i>0) {
            ret+=bit_sum[i];
            i-=i&-i;
        }
        return ret;
    }
    T getsum(int x, int y) {
        T rem = (x==0?0:acc(x-1));
        return acc(y)-rem;
    }
};


int main(){
    
    int n,q;
    cin>>n>>q;
    
    RangeSumQuery<int> inst(100010);
    
    REP(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            inst.add(x,y);
        }else{
            cout<<inst.getsum(x,y)<<endl;
        }
    }
    
    
    return 0;
}