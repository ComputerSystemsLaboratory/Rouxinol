#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){

        string w,t;
        int sum = 0;
        cin >> w;
        std::transform(w.begin(), w.end(), w.begin(), ::toupper);
        while(cin >> t){
                if(t == "END_OF_TEXT") break;
                transform(t.begin(), t.end(), t.begin(), ::toupper);
                if(w.compare(t) == 0)sum++;
        }

        cout << sum << "\n";
        return 0;
}