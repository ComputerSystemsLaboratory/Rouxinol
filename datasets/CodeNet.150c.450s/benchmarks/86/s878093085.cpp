#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
int N, M, P;

int main() {
    while(cin >> N >> M >> P, N||M||P){
        int sum=0, temp=0;
        for(int i=0; i<N; ++i){
            int a; cin >> a; 
            if(i==M-1) temp = a;
            sum += a;
        }
        if(temp!=0){  
            cout << sum*(100-P)/temp << endl;
        }else{
            cout << 0 << endl;
        }
    }    
    
    return 0;
}
