//
//  main.cpp
//  AOJ1186
//
//  Created by aki33524 on 2014/07/07.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int H, W;

void solve(){
    int diag = 2*150*150;
    int rw;
    int rh;
    
    for(int h=1; h<=150; h++){
        for(int w=h+1; w<=150; w++){
            if(H*H + W*W <= h*h + w*w && h*h + w*w < diag){
                if(H*H + W*W == h*h + w*w){
                    if(H < h){
                        cout << h << " " << w << endl;
                        return;
                    }
                }else{
                    diag = h*h + w*w;
                    rw = w;
                    rh = h;
                    break;
                }
            }
        }
    }
    cout << rh << " " << rw << endl;
}

int main(int argc, const char * argv[])
{
    while(cin>>H>>W, H|W){
        solve();
    }
    
    return 0;
}