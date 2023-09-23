#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;


int main(){

        int a,b,c,d=0;

        scanf("%d %d %d\n",&a,&b,&c);

        for(int i=a;i<=b;i++){
                if(c%i==0)
                        d++;
        }
        printf("%d\n",d);

}
