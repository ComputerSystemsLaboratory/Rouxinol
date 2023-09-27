#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string w, t;
    int n, count;
    count = 0;
    string end = "END_OF_TEXT";
    bool flag;
    flag = true;
    cin >> w;
    while(flag && cin >> t){
        n = t.length();
        for(int i=0; i<n; ++i){
            if((int)(end[i] - t[i]) != 0){
                break;
            }
            if(i == n-1 && (int)(end[i] - t[i]) == 0){
                flag = false;
            }
        }
        if(flag && n == w.length()){
            for(int i=0; i<n; ++i){
                if((int)(w[i] - t[i]) != 0 && abs((int)(w[i] - t[i])) != abs((int)('a'-'A')) ){
                    break;
                }
                if(i == n-1 && ((int)(w[i] - t[i]) == 0 || abs((int)(w[i] - t[i])) == abs((int)('a'-'A')))){
                    count++;
                }
            }
        }
    }
    std::cout << count << endl;
    return 0;
}

