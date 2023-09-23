//
//  main.cpp
//  AOJ1179
//
//  Created by aki33524 on 2014/07/08.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
using namespace std;

int Y, M, D;

int cal(int ey, int em, int ed){
    int cnt = 0;
    for(int y=1; y<=ey; y++){
        for(int m=1 ; m<=10; m++){
            for(int d=1; d<=20-(y%3!=0 && m%2==0); d++){
                cnt++;
                if(ey == y && em == m && ed == d)
                    return cnt;
            }
        }
    }
}

int main(int argc, const char * argv[])
{
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin>>Y>>M>>D;
        cout << cal(1000, 1, 1) - cal(Y, M, D) << endl;
    }
    
    return 0;
}