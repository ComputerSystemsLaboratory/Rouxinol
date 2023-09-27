#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

int main(){
    int hosei[]={0,4,0,1,4,6,2,4,0,3,5,1,3};
    string day[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int m,n;
    while(1){
        cin>>m>>n;
        if(!(m||n))break;
        cout<<day[(hosei[m]+n%7-1)%7]<<endl;
    }
    
    
    return 0;
}