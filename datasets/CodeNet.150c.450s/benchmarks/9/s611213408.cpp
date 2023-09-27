#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string s;
    int n, h, sum, l;
    while(cin >> s){
        l = s.length();
        if(l == 1 && (char)(s[0]) == '-'){
            break;
        }
        cin >> n;
        sum = 0;
        for (int i=0; i<n; ++i){
            cin >> h;
            sum += h;
        }
        for (int i=0; i<l; ++i){
            std::cout << s[(sum+i)%l];
        }
        std::cout << endl;
    }
    return 0;
}

