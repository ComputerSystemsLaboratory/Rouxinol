#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long long int num1 , num2, gcd , res, lcm;
    while(scanf("%lld%lld",&num1,&num2)!=EOF){

        res = num1 * num2 ;
        while(num1 != num2){
            if(num1 > num2)
                num1 = num1 - num2 ;
            else
                num2 = num2 - num1 ;
        }
        gcd = num1 ;
        lcm = res / gcd ;
         printf("%lld %lld\n", gcd, lcm);
    }
    return 0;
}