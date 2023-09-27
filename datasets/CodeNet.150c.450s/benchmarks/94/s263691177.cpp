//
//  main.cpp
//  test
//
//  Created by hayato-m on 2016/03/16.
//  Copyright ?? 2016??´ Hayato MAKI. All rights reserved.
//

#include <iostream>
#include "algorithm"
using namespace std;



int main() {
    int n;
    cin >> n;
    int R[n];
    int i = 0;
    bool flag = true;
    int c = 0;
    int temp;
    
    
    for (int i = 0; i < n; i++){
        cin >> R[i];
    }
    
    while(flag){
        flag = false;
        for (int j = n-1; j > i; j--){
            if (R[j]<R[j-1]){
                temp = R[j];
                R[j] = R[j-1];
                R[j-1] = temp;
                flag = true;
                c++;
            }
        }
        i++;
    }

    
    for(int j=0; j<n; j++){
        cout << R[j];
        if (j<n-1){
            cout << " ";
        }
    }
    cout << endl << c << endl;
}