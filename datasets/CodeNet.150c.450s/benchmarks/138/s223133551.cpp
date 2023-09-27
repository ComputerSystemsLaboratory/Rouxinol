#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

unsigned int findGreatCommonDivisor(unsigned int a,unsigned int b){
    unsigned int startNum;
    unsigned int divisor;
    if(a>b){
        startNum = a;
        divisor = b;
    }else{
        startNum = b;
        divisor = a;
    }
    
    if(startNum%divisor == 0){
        return divisor;
    }
    else{
        return findGreatCommonDivisor(startNum%divisor,divisor);
    }
    
    
    /*
    if(a>b){
        startNum = a;
    }else{
        startNum = b;
    }
    
    bool hasFound = false;
    if(a%startNum == 0&&b%startNum == 0){
        hasFound = true;
    }else{
        startNum = startNum/2 +1;
    }
    
    while(!hasFound){
        if(a%startNum == 0&&b%startNum == 0){
            hasFound = true;
        }else{
            startNum--;
        }
    }
    */
}

int main()
{
	unsigned int a;
    unsigned int b;
    cin>>a>>b;
    cout<<findGreatCommonDivisor(a,b)<<endl;
	return 0;
}