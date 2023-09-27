#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int time, hour, minute, second;
    
    cin >> time ;
    
    minute = time / 60;
    second = time % 60;
    
    hour = minute / 60;
    minute = minute % 60;
    
    printf("%d:%d:%d\n", hour, minute, second);
    
    return 0;
}