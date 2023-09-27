//
//  main.cpp
//  counting_sort
//
//  Created by ???????????? on 2017/10/09.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

void counting_sort(int A[], int B[], int k, int n){
    int i, j, C[k+1];
    
    for (i = 0; i < k; i++){
        C[i] = 0;
    }
    
    for (j = 0; j < n; j++){
        C[A[j]]++;
    }
    
    for(i = 1; i <= k ; i++){
        C[i] = C[i] + C[i-1];
    }
    
    for(j = n - 1; j >= 0; j--){
        B[C[A[j]]-1] = A[j];
        C[A[j]]-- ;
    }
    
}

int main(int argc, const char * argv[]) {
    int n, i, max_int;
    scanf("%d", &n);
    int A[n], B[n];
    max_int = INT_MIN;
    for (i = 0; i < n ; i++){
        scanf("%d", &A[i]);
        if(A[i] > max_int) max_int = A[i];
    }
    
    
    counting_sort(A, B, max_int + 1, n);
    for (i = 0; i < n ; i++){
        if(i) cout << " ";
        cout<<B[i];
    }
    cout << endl;
    
    return 0;
}