#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int prime(int num){
    if (num == 2||num == 3) return 1;
    if ((num%2)*(num%3) == 0) return 0;
    
    if (num <= 4) {
        return 0;
    }
    for (int k = 3; k <= int(sqrt(num))+2; k+=2) {
        if (num % k == 0) return 0;
    }
    return 1;
}

int main(){
    int N;
    cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        count += prime(num);
    }
    
    cout << count << endl;
    return 0;
}