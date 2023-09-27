#include <iostream>
#include <string>
using namespace std;
   
int main(){
    string x;
    while (cin >> x){
        if (x == "0") break;
        long s = 0;
        for (long i = 0; i < x.size(); i++) s += x[i] - '0';
        cout << s << endl;
    }
    return 0;
}