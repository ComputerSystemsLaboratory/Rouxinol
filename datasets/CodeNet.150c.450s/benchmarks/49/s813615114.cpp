#include<iostream>
using namespace std;
int main(){
    int n;
    int score;
    int sum;
    int max, min;
    cin >> n;
    while(n){
        sum = 0;
        max = 0;
        min = 1000;
        for(int i=0;i<n;++i){
            cin >> score;
            sum += score;
            if(score > max){
                max = score;
            }
            if(score < min){
                min = score;
            }
        }
        sum = sum - max - min;
        cout << sum/(n-2) << endl;
        cin >> n;
    }
}