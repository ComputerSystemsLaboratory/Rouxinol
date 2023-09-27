#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, tmp;
    int len = 0;
    vector<int> data;
    while (1) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        len+=2;
        if (b < a){
            tmp = b;
            b = a;
            a = tmp;
        }
        data.push_back(a);
        data.push_back(b);
    }
    for (int i = 0; i < len; i+=2){
        cout << data[i] << " " <<data[i + 1] << endl;
    }
}

