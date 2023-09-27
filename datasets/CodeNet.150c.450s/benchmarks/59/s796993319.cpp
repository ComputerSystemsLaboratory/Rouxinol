//
//  main.cpp
//  ALDS1_1-A
//
//  Created by ?????¶??? on 15/8/30.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <vector>

namespace Function {
    
    void showNumbers(std::vector<int> numbers){
        
        for (auto & num : numbers){
            
            if (num == numbers.back()) {
                
                printf("%d", num);
                
            }else{
                printf("%d ", num);
            }
        }
        
        printf("\n");
    }
}

int main() {
    
    int count;
    std::cin >> count;
    
    int num;
    
    std::vector<int> numbers;
    
    for (int i = 0; i < count; ++i) {

        std::cin >> num;
        numbers.push_back(num);
    }
    
    for (int i = 0; i < numbers.size(); ++i) {

        for (int j = i; j > 0; --j) {
            
            if (numbers[j] < numbers[j - 1]) {
                
                int temp = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j - 1] = temp;
            }
        }
        
        Function::showNumbers(numbers);
    }
    
    return 0;
}