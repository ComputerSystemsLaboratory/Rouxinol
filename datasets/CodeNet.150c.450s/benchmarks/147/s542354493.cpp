//
// Created by 10034 on 2020/7/24.
//

#include <iostream>
using namespace std;
int ans[10010];
int main(){
    int n;
    cin>>n;
    for(int x=1;x<=100;++x){
        for(int y=1;y<=100;++y){
            for(int z=1;z<=100;++z){
                if(x*x+y*y+z*z+x*y+y*z+x*z<=n){
                    ans[x*x+y*y+z*z+x*y+y*z+x*z]++;
                }
            }
        }
    }
    for(int i=1;i<=n;++i)
        cout<<ans[i]<<endl;
    return 0;
}