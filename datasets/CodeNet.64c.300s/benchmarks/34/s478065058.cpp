#include <iostream>
using namespace std;

const static int MAX = 100; 

int main(){
    int n, key, array[MAX], j;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int i=1;i<n;i++){
        for(int k=0;k<n-1;k++){
            cout << array[k] << " ";
        }
        cout << array[n-1] << endl;

        key = array[i];
        j = i - 1;
        while(j>=0 && key<array[j]){
            array[j+1] = array[j];
            j -- ;
        }
        array[j+1] = key;
    }
    for(int k=0;k<n-1;k++){
        cout << array[k] << " ";
    }
    cout << array[n-1] << endl;
    return 0;
}
