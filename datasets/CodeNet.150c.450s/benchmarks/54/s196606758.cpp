#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int count = 0; string W,T;
    cin >> W;
    transform(W.begin(),W.end(), W.begin(),::tolower);
    while(1){
        cin >> T;
        if(T.find("END_OF_TEXT") != string::npos) break;
        transform(T.begin(),T.end(), T.begin(),::tolower);
        if(T == W) count++;
    }
    cout << count << endl;
    return 0;
}