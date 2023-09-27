#include <iostream>
using namespace std;
 
int main() {
    // your code goes here
    int n;
    cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
     
    for(int i=0; i<n-1 ;i++){
            cout << arr[i] << " ";
        }
        cout << arr[n-1] << endl;
     
    for(int i=1; i<=n-1; i++){
        int v = arr[i];
        int j = i-1;
         
        while(j >=0 && arr[j]>v){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;


        for(int i=0; i<n-1 ;i++){
            cout << arr[i] << " ";
        }
        cout << arr[n-1] << endl;
    }
     
     
    return 0;
}