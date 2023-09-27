#include <iostream>
#include <string>
#include <queue>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){

    int n;
    int a;
    vector<int> hairetu;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> a;
        hairetu.push_back(a);
    }

    for(int i=n-1; i>=0; i--){
        if( i != 0){
            cout << hairetu[i] << " ";
        }else{
            cout << hairetu[i] << endl; 
        }        
    }

    return 0;
}