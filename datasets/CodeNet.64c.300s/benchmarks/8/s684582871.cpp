#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    for(int i = 1; i <= x; i++){
        if (i % 3 == 0) cout << " " << i;
        else{
            int j = i;
            while(j > 0){
                if(j % 10 == 3){
                    cout << " " << i;
                    break;
                } else {
                    j /= 10;
                }
            }
        }
    }
    cout << endl;
    return 0;
}

