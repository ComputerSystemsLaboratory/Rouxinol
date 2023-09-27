#include <iostream>

using namespace std;

int main(){
    int n,s[1000], i;
    while (cin >> n && n>0){
        int sum = 0, maximum =0, minimum = 10000;
        for (i = 0; i < n; i++){
            cin >> s[i];
            sum += s[i];
        }
        for (i = 0; i < n; i++){
            maximum = max(maximum, s[i]);
            minimum = min(minimum, s[i]);
        }
        cout << (sum - maximum - minimum)/(n -2) << endl;
    }
}