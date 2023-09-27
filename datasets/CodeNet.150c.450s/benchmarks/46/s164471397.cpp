//
//  main.cpp
//  ITP1_7-B
//
//  Created by ?????¶??? on 15/8/15.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {

    int n,x;
    
    while (true) {
        cin >> n >> x;
        
        if (n == 0 && x == 0){
            break;
        }
        
        vector<vector<int> > numbers;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= n; k++) {
                    
                    if (i + j + k == x){
                        
                        if (i == j || i == k || j == k) {
                            continue;
                        }
                       
                        
                        
                        bool isMatch = false;
                        
                        // ????????????????????°???????????????????????\?????????
                        if (numbers.size() > 0){

                            for (int m = 0; m < (int)numbers.size(); m++) {
                                
                                int judge = 0;

                                
                                for (int n = 0; n < 3; n++) {
                                    
                                    if (i == numbers[m][n] || j == numbers[m][n] || k == numbers[m][n]){
                                        judge++;
                                    }
                                }
                                
                                // ???????????£??????????????????????????????????????????
                                if (judge > 2){
                                    isMatch = true;
                                    break;
                                }
                            }
                            
                        }
                         
                        
                        if (!isMatch) {

                            numbers.push_back({i, j, k});
                            
//                            printf("%d + %d + %d = %d ??\??????\n", i, j, k, x);
                        }else{
//                            printf("%d %d %d ????????????\n", i, j, k);
                        }
                        
                       
                    }
                         
                    
                }
            }
        }
        
        printf("%d\n", static_cast<int>(numbers.size()));
        
        
    }
    
    
    return 0;
}