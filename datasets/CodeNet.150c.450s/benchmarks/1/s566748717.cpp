#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <queue>
#include <random>

using namespace std;

#define min(a,b) ((a)<(b) ? (a):(b))
#define max(a,b) ((a)>(b) ? (a):(b))

int gcd(int a, int b){
    while( b ){
        int m = a % b;
        a = b;
        b = m;
    }
    return a;
}

int lcm(int a, int  b){
    return (a*b)/gcd(a,b);
}

int isPrim(int a){
    if(a==1){
        return 0;
    }
    for(int i=2;i<=(a+1)/2;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

long long mod_pow(long long x, long long n, long long mod){
    //x???n???????¨????????????????n??????2?????¨?¨???????????¨????
    //x^22 = x^16 + x^4 + x^2
    long long ret=1;
    while(n>0){
        if(n%2==1){
            ret=(ret*x)%mod;//???????????????
        }
        x=(x*x)%mod;//2???
        n=n/2;
    }
    return ret;
}

struct VV{
    int x;
    int y;
    int z;
};

class LessInt {
public:
    bool operator()(const VV& riLeft, const VV& riRight) const {
        if(riLeft.x == riRight.x){
            return riLeft.y > riRight.y;
        }
        return riLeft.x > riRight.x;
        
    }
};

class indInt {
public:
    bool operator()(const VV& riLeft, const VV& riRight) const {
        return riLeft.x < riRight.x;
        
    }
};

struct XX{
    int zenbu=0;
    int kidoku=0;
};

class xxIntu {
public:
    bool operator()(const VV& riLeft, const VV& riRight) const {
        //?¬¬1?????¶
        if(riLeft.z != riRight.z){
            return riLeft.z < riRight.z;//<:??????(?°??????????)???>:??????(??§?????????)
        }
        //?¬¬2?????¶
        return riLeft.x < riRight.x;
    }
};
bool operator< (const VV &riLeft, const VV &riRight){
    return riLeft.z < riRight.z;
};
/*bool operator> (const XX &riLeft, const XX &riRight){
    return riLeft.a > riRight.a;
};*/



int main(int argc, const char * argv[])
{
    //std::ios::sync_with_stdio(false);
    //scanf("%s",S);
    //scanf("%d",&N);
    //getline(cin, target);
    //cin >> x >> y;
    //????????????
    
    int n;
    cin >> n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    vector<int>lis;
    lis.clear();
    
    for(int i=0;i<n;i++){
        vector<int>::iterator it = lower_bound(lis.begin(),lis.end(),a[i]);
        if(it==lis.end()){
            lis.push_back(a[i]);
        }else{
            *it=a[i];
        }
    }
    
    cout << lis.size() << endl;
    
    //???????????§
    //cout << "ans" << endl;????????????
    //printf("%.0f\n",ans);//?°???°?????\?????¨?????????
    //printf("%.7f\n",p);
    //printf("%f\n",pow(2,ans.size()));
    
    return 0;
}