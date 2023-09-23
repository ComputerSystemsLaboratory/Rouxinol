#include <iostream>
using namespace std;

int main(){
    int mini, n, array[100], sw=0;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    for(int i=0;i<n;i++){
        mini = i;
        for(int j=i+1;j<n;j++){
            if(array[mini]>array[j]){
                mini = j;
            }
        }
        if(i!=mini){
            swap(array[i], array[mini]);
            sw++;
        }
    }
    for(int i=0;i<n;i++){
        if(i) cout << " ";
        cout << array[i];
    }
    cout << endl << sw << endl;

    return 0;
}
