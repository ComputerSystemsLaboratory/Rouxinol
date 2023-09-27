#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        double pai=3.141592653589;
        vector<int>ar(3);
        for(auto&e:ar){
                cin>>e;
        }
        sort(ar.begin(),ar.end());
        cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;
        return 0;
}