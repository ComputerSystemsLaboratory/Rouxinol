#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]<arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<4; i++){
        cout << arr[i] << ' ';
    }
    cout << arr[4] << endl;
return 0;
}