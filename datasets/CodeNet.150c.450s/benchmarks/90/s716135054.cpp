#include<iostream>
#include<vector>

using namespace std;

int main(void){


    vector<int> array(101,0);
    int n,maxi = 0;

    while(cin >> n){

        array[n]++;

    }

    for(int i = 1;i < 101;i++){
        if(array[i] > maxi){
            maxi = array[i];
        }
    }

    for(int i = 1;i < 101;i++){
        if(array[i] == maxi){
            cout << i << endl;
        }
    }
    return 0;
}