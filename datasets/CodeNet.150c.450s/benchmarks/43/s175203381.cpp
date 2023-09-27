#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int number_A, number_B;
        int sum_A, sum_B;
        sum_A = sum_B = 0;
        for(int i = 0; i < n; i++){
            cin >> number_A >> number_B;
            if(number_A > number_B){
                sum_A += number_A + number_B;
            }else if(number_A == number_B){
                sum_A += number_A;
                sum_B += number_B;
            }else{
                sum_B += number_A + number_B;
            }
        }
        cout << sum_A << " " << sum_B << endl;


    }
    return 0;
}
