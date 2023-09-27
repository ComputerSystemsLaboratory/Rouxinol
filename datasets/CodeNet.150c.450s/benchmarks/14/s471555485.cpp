#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;


int main(){

        int n,i=1,x;

        scanf("%d\n",&n);

        while(1){
                x=i;
                if(i>n) {
                        putchar('\n');
                        return 0;
                }
                //printf("\ni %d x %d\n",i,x);

                if(x%3 == 0) {
                        printf(" %d",i);
                } else {
                        do {
                                //printf("\ndo i %d x %d\n",i,x);
                                if(x%10 == 3) {
                                        printf(" %d",i);
                                        break;
                                }
                                else
                                        x/=10;
                        } while(x);
                }
                i++;
        }
}
