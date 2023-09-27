#include <iostream>
#include <string>
using namespace std;
int main(void){
    int num;
    int taro = 0, hana = 0;
    cin >> num;
    for(int i=0; i<num; i++){
        string str1, str2;
        cin >> str1 >> str2;
        if(str1 < str2){
            hana += 3;
        }else if(str1 > str2){
            taro += 3;
        }else{
            hana++;
            taro++;
        }
    }
    cout << taro << " " << hana << endl;
    return 0;
}