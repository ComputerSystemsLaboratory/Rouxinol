#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool LF_PRIME_SEQUENCE(const int &n, vector<int> &vPrime){
    if(n < 2){
        return false;
    }
    vPrime.clear();
    vPrime.push_back(2);
    for (int i = 2; i * i <= n; i++){
        int iPrimeType = 1;
        for(int j = 0; j < vPrime.size(); j++){
            if(i % vPrime[j] == 0){
                iPrimeType = 0;
                break;
            }
            if(i < vPrime[j] * vPrime[j]){
                break;
            }
        }

        if(iPrimeType == 1){
            vPrime.push_back(i);
        }
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> vPrime;
    if(!LF_PRIME_SEQUENCE(n, vPrime)){
        return 1;
    }
    printf("%d:", n);
    for(int i = 0; i < vPrime.size() && n != 1; i++){
        while (n % vPrime[i] == 0){
            printf(" %d", vPrime[i]);
            n /= vPrime[i];
        }
    }
    if (n != 1){
        printf(" %d\n", n);        
    } else {
        printf("\n");
    }
    return 0;
}
