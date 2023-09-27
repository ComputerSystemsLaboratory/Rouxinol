//
//  main.cpp
//  ITP1_3-C
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
using namespace std;
//int main(int argc, const char * argv[])
//{
//
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


int main(){
    
    while (true) {
        int a,b;
        
        cin >> a >> b;
        
        if (a == 0 && b == 0){
            break;
        }
        
        if (a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        
        cout << a << " " << b << "\n";
        
    }
    
    
    return 0;
}