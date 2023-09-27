#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i,c,j,n,count = 0,number[10000];

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> number[i];
        c = 0;
        for(j = 1;j <= sqrt(number[i]);j++){
            if(number[i] % j == 0){
                c++;
            }
        }
        if(c == 1){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}