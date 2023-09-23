#include<iostream>

using namespace std;

int main() {
    int n = 999999;
    char* p;
    int t = 2;

   

    p = new char[n];
    for(int i = 0; i < n; i++) {
        p[i] = 1;
    }
    p[0] = p[1] = 0;

    for(int i = 2; i < n; i++) {
        if(p[i] == 0)
            continue;
        for(int point = i * 2; point < n; point += i) {
            p[point] = 0;        
        }
    }
    
    while(cin >> n) {
        int c = 0;
        for(int i = 1; i <= n; i++) {
            if(p[i]) {
                c++;
            }
        }
        cout  << c << endl;
    }



    return 0;
}