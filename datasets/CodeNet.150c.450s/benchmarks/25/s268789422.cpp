#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    string S;
    int num[27] {0};
    while(cin >> S){
        
        for(auto&& c: S){
            c = tolower(c);
            num[c-'a'] += 1;
        }
    }
    for(int i=0; i<='z'-'a'; ++i){
        cout << (char)('a'+i) << " : " << num[i] << endl;;
    }



    return 0;
}
