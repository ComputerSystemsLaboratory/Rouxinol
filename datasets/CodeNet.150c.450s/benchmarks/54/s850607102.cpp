#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    string w;
    cin >> w;
    string d;
    int k=0;
    while(cin >> d) {
        for(int i=0;i<d.size();i++) {
            d[i] = tolower(d[i]);
        }
        if(d == w) {
            k++;
        }
    }
    cout << k << endl;
}