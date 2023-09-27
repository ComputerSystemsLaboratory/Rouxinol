#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

typedef long long ll;
using namespace std;

#define mod 1000000007
#define INF 2147483647
#define LLINF 2000000000000000000LL
#define PI 3.141592653589793

#define SIZE 200000

/* Binary Indexed Tree(1-index) */
struct BIT{
    typedef int Type; //?????¨?????????
    int bit_size;
    vector<Type> data;

    BIT(int n){
        bit_size = n;
        data.assign(n+1,0);
    }
    
    //k?????????????´????x????????????
    void add(int k,Type x){
        while(k<=bit_size){
            data[k]+=x;
            k+= k&(-k);
        }
    }

    //[1,k]??????
    int query(int k){
        int rec=0;
        
        while(k>0){
            rec+=data[k];
            k-= k&(-k);
        }
        
        return rec;
    }
};


int main(){
    int n,q,a,b,c;
    BIT rmq(100000);
    
    scanf("%d%d",&n,&q);
    
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&a,&b,&c);
        
        if(a==0){
            rmq.add(b,c);
        }else{
            printf("%d\n",rmq.query(c)-rmq.query(b-1));
        }
    }
    
    
    return 0;
}