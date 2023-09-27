#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    int res[20];
    int numres = 0;
    while(1){
        cin >> n;
        if(n==0){
            break;
        }
        
        int max = INT_MIN;
        int min = INT_MAX;
        int total = 0;
        int read;
        for(int i=0; i<n; i++){
            cin >> read;
            total += read;
            if(read < min){
                min = read;
            }
            if(read > max){
                max = read;
            }
        }
        res[numres] = (total - max - min)/(n-2);
        numres++;
    }

    for(int i=0; i< numres; i++){
        cout << res[i] << endl;
    }

    return 0;
}