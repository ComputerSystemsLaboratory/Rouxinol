#include "bits/stdc++.h"
using namespace std;
int main(){
    string W,tex;
    int c = 0;
    cin >> W;
    while(true){
        cin >> tex;
        if(tex == "END_OF_TEXT") break;
        transform(tex.begin(),tex.end(),tex.begin(),::tolower);
        if(tex == W) c++;
    }
    cout << c << endl;
    return 0;
}
