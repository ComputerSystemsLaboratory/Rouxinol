#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(void){
    string w, t;
    cin >> w;
    for(int i= 0; i < w.size(); i++) w[i] = tolower(w[i]);

    int count = 0;
    while(true){
        cin >> t;
        if(t == "END_OF_TEXT") break;
        for(int i= 0; i < t.size(); i++) t[i] = tolower(t[i]);
        if(t == w) count++;
    }
    cout << count << endl;

    return 0;
}

