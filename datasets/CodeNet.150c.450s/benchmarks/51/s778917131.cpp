#include <iostream>
#include <vector>
using namespace std;
int main(void){
    // Your code here!
    vector<int>num(31);
    int n;
    for(int i = 1; i <= 28; i++){
        cin >> n;
        num[n] = 1;
        /*cin >> num[i];
        num[i] = 1;*/
    }

    for(int i = 1; i <= 30; i++){
        if(!num[i]) cout << i << endl;
    }
}


