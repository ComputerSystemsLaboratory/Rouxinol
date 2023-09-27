#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<cstdlib>
#include<queue>
#include<list>
using namespace std;

int n, q, sum;
vector<int> a;
bool rec(int i, int sum){
    if(sum==0)return true;
    if(i==n||sum<0)return false;
    return rec(i+1, sum)||rec(i+1, sum-a[i]);
}
int main(){
    cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>sum;
        cout<<(rec(0, sum)?"yes": "no")<<endl;
    }
}

