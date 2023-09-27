#include <iostream>
#include <bitset>
#include <fstream>
#include <math.h>

using namespace std;

#define NUM_LIMIT 1000000   // numbers < NUM_LIMIT

int getNumOfPrimes(bitset<NUM_LIMIT> &isPrime, int last_limit, int limit){
    int cnt = 0;
    for (int i = 2; i <= limit; i++){
        if (!isPrime[i]) continue;  // skip non prime numbers
        cnt ++;
        // cross out the multiples of the number
        for (int j = max(2.0,ceil((double)last_limit/i)); i*j <= limit; j++){
            isPrime[i*j] = 0;
        }
    }
    return cnt;
}

int main(){
    //ifstream cin("input.txt");
    bitset<NUM_LIMIT> isPrime;
    isPrime.set();  // set all bits to 1
    
    // input data
    int number;
    int max_num = 0;
    while(cin >> number){
        int cnt = 0;
        if (number > max_num){
            cnt = getNumOfPrimes(isPrime, max_num+1, number);
            max_num = number;
        } else {
            cnt = getNumOfPrimes(isPrime, number+1, number);
        }
        cout << cnt << endl;
    }
    return 0;
}