#include <iostream>
using namespace std;
int main(void){
    int n;
    string taro, hanako;
    int score_taro, score_hanako;
    
    cin >> n;
    
    score_taro = 0;
    score_hanako = 0;
    while(cin >> taro >> hanako){
        if(taro > hanako){
            score_taro += 3;
        }
        
        if(taro == hanako){
            score_taro += 1;
            score_hanako += 1;
        }
        
        if(taro < hanako){
            score_hanako += 3;
        }
    }
    cout << score_taro << " " << score_hanako << endl;
}