#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int data[n];
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    
    int flag = 1;
    int count = 0;
    while(flag){
        flag = 0;
        for(int i = n-1; i > 0; i--){
            if(data[i] < data[i-1]){
                swap(data[i], data[i-1]);
                flag = 1;
                count += 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << data[i];
        }
        else{
            cout << ' ' << data[i];
        }
    }
    cout << endl << count << endl;
    return 0;
}
