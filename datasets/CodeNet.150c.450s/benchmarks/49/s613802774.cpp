#include <iostream>
#include <string>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        vector<int>vec;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        double d=0;
        for(int i=1;i<vec.size()-1;i++){
            d+=vec[i];
        }
        cout<<(int)(d/(vec.size()-2))<<endl;
    }
    return 0;
}