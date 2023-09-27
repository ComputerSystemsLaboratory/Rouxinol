#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

    int n;
    char str[150*4 + 1];
    
    while(true) {

        scanf("%d\n", &n);

        if (n != 0) {
            fgets(str, sizeof(str) / sizeof(char), stdin);
        }
         if(n == 0) {   
            return 0;
        }
        //0????????????1?????????
        int left = 0, right = 0;
        int ans = 0;
        int current = 0;

        for(int i = 0; i < n; i++) {
            if(str[i*3] == 'l') {
                left = 1 - left;
            }

            if(str[i*3] == 'r') {
                right = 1 - right;
            }

            if(left == right && left != current) {
                ans++;
                current = 1 - current;
            }
        }
        
        printf("%d\n", ans);
    }
    return 0;
}