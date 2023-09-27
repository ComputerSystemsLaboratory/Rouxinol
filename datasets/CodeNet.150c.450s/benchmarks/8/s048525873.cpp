#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int taroP = 0;
    int hanakoP = 0;
    string taro,hanako;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> taro;
        cin >> hanako;
        if (taro == hanako) {
            taroP += 1;
            hanakoP += 1;
        }else {
            if (taro > hanako){
                taroP += 3;
            }else {
                    hanakoP += 3;
                }
            }
        }
    cout << taroP << " " << hanakoP << endl;
    
    return 0;
}