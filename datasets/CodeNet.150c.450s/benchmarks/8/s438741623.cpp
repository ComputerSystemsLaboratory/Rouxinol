#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n, tp = 0, hp = 0;
    string t,h;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t >> h;
        if(t > h){
            tp +=3;
        } else if(t == h){
            tp +=1;
            hp +=1;
        } else {
            hp += 3;
        }
    }
    cout << tp << " " << hp << endl;
    return 0;
}

