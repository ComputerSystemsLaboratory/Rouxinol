#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

        int sum = 0;
        char num;

        while(true){
                scanf("%c",&num);
                if(num == '0') break;
                
                while(num != '\n'){
                        sum += atoi(&num);
                        scanf("%c",&num);
                }
                cout << sum << "\n";
                sum = 0;
        }
        return 0;
}