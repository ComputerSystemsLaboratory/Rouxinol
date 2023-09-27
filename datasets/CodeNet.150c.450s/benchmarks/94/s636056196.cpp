//
//  main.cpp
//  ajo
//
//  Created by Hashimoto Ryo on 2015/06/20.
//  Copyright (c) 2015??´ Hashimoto Ryo. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 100;
//
//int bubbleSort(int A[], int N){
//    int sw = 0;
//    bool flag = 1;
//    for(int i = 0;flag;i++){
//        flag = 0;
//        for(int j = N - 1;j >= i + 1;j--){
//            if(A[j] < A[j-1]){
//                swap(A[j], A[j-1]) ;
//                flag = 1;
//                sw++;
//            }
//        }
//    }
//    return sw;
//
//}
//
//int main(){
//
//    int A[100],N,sw;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> A[i];
//    }
//    sw = bubbleSort(A, N);
//    
//    for(int i = 0;i < N;i++){
//        if(i) cout << " ";
//        cout << A[i];
//    }
//    cout << endl;
//    cout << sw << endl;
//    return 0;
//}
//
//


int main(){

    int n;
    int a[MAX];
    int count = 0;
    
    //?????¬????????\???
    cin >> n;
    for(int i = 0;i < n ; i++){
        cin >> a[i];
    }
    
    //?????¬???????????????
    for(int i = 0;i < n - 1;i++){
        
        int j = n - 1;//?????????????????????????????????
        while(j > i){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
                count++;
            }
            j--;
        }
    }
    
    for(int i = 0;i < n;i++){
        if(i)cout << " ";
        cout << a[i];
    }
    cout << endl;
    cout << count << endl;
    
    return 0;
}