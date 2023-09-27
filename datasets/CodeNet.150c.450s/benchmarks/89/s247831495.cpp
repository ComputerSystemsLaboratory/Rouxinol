#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    bool prime[1000000];
    for(int i = 0; i < 1000000; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;

    for(int i = 1; i < sqrt(1000000); i++){
        if(prime[i]){
            for(int j = 0; i * (j + 2) <= 1000000; j++){
                prime[i * (j + 2)] = false;
            }
        }
    }
    vector<int> p;
    p.push_back(-1);
    for(int i = 2; i < 1000000; i++){
        if(prime[i]){
            p.push_back(i);
        }
    }

    while(1){
        int a, d, n;
        scanf("%d %d %d", &a, &d, &n);
        if(a == 0 && d == 0 && n == 0)
            break;

        int count = 0;
        for(int i = a; i < 1000000; i += d){
            if(prime[i]){
                count++;
                if(n == count){
                    printf("%d\n", i);
                }
            }
        }
    }
    return 0;
}