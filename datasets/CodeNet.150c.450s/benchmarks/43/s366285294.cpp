//
//  main.cpp
//  program
//
//  Created by h3032906 on 2016/11/24.
//  Copyright ?? 2016??´ h3032906. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    int n, a, b;
    int at = 0;
    int bt = 0;
    for( ; ; ){
        std::cin >> n;
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            std::cin >> a >> b;
            if(a > b){
                at = at + a + b;
            }
            else if(b > a){
                bt = bt + a + b;
            }
            else {
                at = at + a;
                bt = bt + b;
            }
        }
        std::cout << at << " " << bt << std::endl;
        at = 0;
        bt = 0;
    }
    return 0;
}