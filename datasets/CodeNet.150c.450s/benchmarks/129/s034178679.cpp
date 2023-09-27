//
//  main.cpp
//  test3
//
//  Created by 黒田浩揮 on 2019/04/21.
//  Copyright © 2019 黒田浩揮. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int a,b,c,d;
    d=0;
    
    cin>>a>>b;
    int number[a+1][b+1];
    int number2[a+1];
    int number3[b];
    for (int u=0; u<a; u++) {
        number2[u]=0;
    }
    for (int u=0; u<b; u++) {
        number3[u]=0;
    }
    for(int v=0;v<a;v++){
        for(int l=0;l<b;l++){
            cin>>c;
            
            number[v][l]=c;
            number2[v]+=c;
            number3[l]+=c;
            
            
        }
    }
    for(int n=0;n<a;n++){
        number[n][b]=number2[n];
    }
    for(int y=0;y<b;y++){
        number[a][y]=number3[y];
    }
    for(int y=0;y<b;y++){
        d+=number3[y];
    }
    number[a][b]=d;
    for(int v=0;v<a+1;v++){
        for(int l=0;l<b+1;l++){
            if(l==0){
                cout<<number[v][l];
            }else{
                cout<<" "<<number[v][l];
            }
            if(l==b){
                cout<<endl;
            }
        }
    }
}

