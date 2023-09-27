#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#include<stack>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;


int main(){
    stack<int> box;
    int n;
    while(cin>>n){
        if(n==0){
            cout<<box.top()<<endl;
            box.pop();
        }
        else{
            box.push(n);
        }
    }
    return 0;
}