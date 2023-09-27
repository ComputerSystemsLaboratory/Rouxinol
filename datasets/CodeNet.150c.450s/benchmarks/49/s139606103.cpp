#include <iostream>

using namespace std;

int main(){
    int n, s[1000];
    while(cin >> n && n > 0){
        int  max = 0, min = 10000, sum = 0;
        for (int i = 0; i < n; i++){
            cin >> s[i];
            sum += s[i];
        }
        for (int i = 0; i < n; i++){
            if (s[i] > max)
                max = s[i];
        }
        for (int i = 0; i < n; i++){
            if (s[i] < min)
                min = s[i];
        }
        cout << (sum - max - min)/(n - 2) << endl;
    }
}