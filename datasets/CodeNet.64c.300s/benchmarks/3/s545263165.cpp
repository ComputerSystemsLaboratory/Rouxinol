#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    int input[n];

    for (int i=0;i<n;i++){
        cin >> input[i];
    }
    for (int i=0;i<n;i++){
        cout << input[n-i-1];
        if (i!=n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    return 0;
}