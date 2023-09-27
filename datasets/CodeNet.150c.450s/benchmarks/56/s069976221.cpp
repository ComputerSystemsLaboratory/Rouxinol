//
//  main.cpp
//  ITP1_4-D
//
//  Created by ?????¶??? on 15/8/14.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int count;
    cin >> count;
    
    long number;
    
    std::vector<long> numbers;
    
    for(int i = 0; i < count; i++){
        
        cin >> number;
        
//        cout << i << endl;
        
        numbers.push_back(number);
    }
    
    
//    printf("numbers count : %d" , static_cast<int>(numbers.size()));
    
    
    long max = numbers.front();
    long min = numbers.front();
    long sum = 0;
    
    
    for (int i = 0; i < numbers.size(); i++) {
        
        max = std::max(numbers[i], max);
        min = std::min(numbers[i], min);
        
        sum += numbers[i];
        
    }
    
    printf("%ld %ld %ld\n", min, max, sum);
    
    return 0;
}