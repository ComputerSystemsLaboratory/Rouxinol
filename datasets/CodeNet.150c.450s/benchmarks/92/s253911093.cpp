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
    
    string num;
    int inputValue;
    vector<int> list;
  
    while(getline(cin, num))
    {
        int a,b;
        sscanf(num.c_str(), "%d %d",&a,&b);
        int sum = a+b;
        int digit = 0;
        while( sum != 0)
        {
            sum = sum/10;
            digit++;
        }
        cout << digit << endl;
   //     cout << a-b <<endl;
    }
  
    
    return 0;
}

