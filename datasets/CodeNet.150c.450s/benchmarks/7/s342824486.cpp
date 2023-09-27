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
using namespace std;
int main() {
 
    int num;
    vector<int> list;
    while(cin >> num)
    {
  
        list.push_back(num);
   
    }
    sort(list.begin(), list.end(), greater<int>());
    for(int i = 0 ; i< 3 ; i++)
    {
        cout<< list[i] <<endl;
    }
    
    
    return 0;
}

