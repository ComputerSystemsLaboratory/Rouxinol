//
//  main.cpp
//  kyougi
//
//  Created by 寺林 一旭 on 2018/08/27.
//  Copyright © 2018年 寺林 一旭. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <map>
using namespace std;
int main() {
    
    long num;
    int inputValue;
    vector<int> list;
  
    while(cin >> num) //getline(cin, num))
    {
        long ans=1;
        for( int i = 1; i <= num ; i++)
        {
            ans = ans * i;
        }
        cout << ans << endl;
      //  cout << digit << endl;
   //     cout << a-b <<endl;
    }
  
    
    return 0;
}

