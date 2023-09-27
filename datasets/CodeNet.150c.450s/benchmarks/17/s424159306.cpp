#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){


    vector<int> array(5,0);

    for(int i = 0;i < 5;i++){
        cin >> array[i];
    }

    sort(array.begin(),array.end(),greater<int>());

    for(int i = 0;i < 4;i++){
        cout << array[i] << " " ;
    }
    cout << array[4] << endl;
    

    return 0;
}