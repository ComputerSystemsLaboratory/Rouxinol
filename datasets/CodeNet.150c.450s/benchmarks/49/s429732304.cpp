#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n && n > 0){
        int lst[n];
        for(int i=0;i<n;i++){
            cin >> lst[i];
        }
        int max;
        max = lst[0];
        for(int i=1;i<n;i++){
            if(max < lst[i]){
                max = lst[i];
            }
        }
        int min;
        min = lst[0];
        for(int i=1;i<n;i++){
            if(min > lst[i]){
                min = lst[i];
            }
        }
        cout << (accumulate(lst, lst+n, 0) - max - min)/(n-2) << endl;
    }
    return 0;
}