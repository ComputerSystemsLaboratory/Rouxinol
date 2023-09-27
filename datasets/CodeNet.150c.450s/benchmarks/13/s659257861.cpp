//
//  main.cpp
//  StringTest
//
//  Created by ?????¶??? on 15/8/13.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {

    string str_1,str_2;
    
    cin >> str_1 >> str_2;

    str_1 = str_1 + str_1;
    
    int index_1 = 0;
    int index_2 = 0;
    
//    printf("str_1 length : %d\n" , static_cast<int>( str_1.length()));
    
    while (true) {
    
        
        if (str_1[index_1] == str_2[index_2]) {
            
//            printf("str_1[%d]: %c  str_2[%d]: %c \n", index_1, str_1[index_1], index_2, str_2[index_2] );
            
            index_2++;

        }else{


//            printf("str_1[%d]: %c  str_2[%d]: %c \n", index_1, str_1[index_1], index_2, str_2[index_2] );
            
            if (index_2 > 0) {
                index_1 -= index_2;
            }
            
            index_2 = 0;
        }
        
        index_1++;
        
        
        // ????¬??????¨??¨?¬????
        if (index_2 > static_cast<int>(str_2.length() - 1)){
            
            cout << "Yes" << endl;
            
            break;
        }
        // ????¬?????¬????
        if (index_1 == static_cast<int>(str_1.length() - 1)){
            
            cout << "No" << endl;
            
            break;
        }
    }
    
    return 0;
}