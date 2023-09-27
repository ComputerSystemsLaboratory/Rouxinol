//
//  525.cpp
//  
//
//  Created by Yoshida Satoshi on 2017/11/18.
//
//

#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int R,C;
    int a[10][10000];
    int b[10][10000];//????????????????????£?????????????????????

    int ans;
    
    while(1){
        cin>>R>>C;
        if(R==0&&C==0) break;
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cin>>a[i][j];
            }
        }
        ans=0;
        for(int k=0;k<pow(2,R);k++){
            int sum=0;
            for(int i=0;i<R;i++){
                int kaesu=k/(int)pow(2,i);
                for(int j=0;j<C;j++){
                    b[i][j]=a[i][j]+kaesu;
                }
            }
            for(int j=0;j<C;j++){
                int n=0;//b???j??????????????????????£???´??????????????????
                for(int i=0;i<R;i++){
                    if(b[i][j]%2==0) n++;
                }
                sum+=max(n,R-n);
            }
            if(sum>ans) ans=sum;
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}