#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
 
int main(){
    int N[65535];
    int i = 0;
    while(1){
        scanf("%d", &N[i]);
        if(N[i] == 0) break;
        i++;
    }
 
    for (int j = 0; j < i; j++){
        cout << "Case " << j+1 << ": " << N[j] << "\n";
    }
    return 0;
}