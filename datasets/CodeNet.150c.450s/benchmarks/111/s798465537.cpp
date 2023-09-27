#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    queue<int> number;
    long long int left_sum[21] = {};
    long long int left_temp[21] = {};
    int n;
    cin >> n;
    for(int i = 0;i<n-1;i++){
        int temp;
        cin >> temp;
        number.push(temp);
    }
    left_sum[number.front()] = 1;
    number.pop();
    while(!number.empty()){
        int temp;
        for(int i = 0;i<21;i++){
            if(left_sum[i] == 0) continue;
            temp = i + number.front();
            if(0<= temp && temp <= 20){
                left_temp[temp] += left_sum[i];
            }
            temp = i - number.front();
            if(0<= temp && temp <= 20){
                left_temp[temp] += left_sum[i];
            }
        }
        for(int i = 0;i<21;i++) {
            left_sum[i] = left_temp[i];
            left_temp[i] = 0;
        }
        number.pop();
    }
    int right;
    cin >> right;
    cout << left_sum[right] << endl;
    return 0;
}