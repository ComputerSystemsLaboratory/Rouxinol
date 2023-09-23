//
//  main.cpp
//  no.2
//
//  Created by MacBook_Virgo on 2015/04/23.
//  Copyright (c) 2015??´MacBook_Virgo. All rights reserved.
//
/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B????§£???????????????
*/

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,x;
    while(cin >> n >>x,(n!=0)||(x!=0)){
       int answer = 0;
        for(int a = 1;a<=n;a++){
            for(int b = a+1;b <=n;b++){
                for(int c=b+1;c <=n;c++){
                    if(x == a+b+c){answer++;
                    }
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}