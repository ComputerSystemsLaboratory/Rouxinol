#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
        int n,x;
        cin >> n;

        for(int i = 1; i <= n; i++){
                if((i % 3) == 0 || (i % 10) == 3) cout << " " << i;
                else{
                        for(x = i; x > 0; x /= 10){
                                if((x % 10) == 3){ 
                                        cout << " " << i;
                                        break;
                                }
                        }
                }
        }
        cout << "\n";

        return 0;
}