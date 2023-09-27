#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;

int main(void){
    int in[N] = { 0 };
    for(int n; cin >> n; in[n - 1] ++);

    for(int *p = max_element(in, in + N), result = *p; *(p = max_element(in, in + N)) == result; cout << int(p + 1 - in) << endl) *p = -1;
    
    return 0;
}