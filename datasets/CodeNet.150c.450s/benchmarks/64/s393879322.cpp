#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <map>
#include <string>
#include <set>
#include <iostream>
#include <fstream>
#include <iterator>
#include <math.h>
#include <stdlib.h>

using namespace std;

vector<int> makeRandomVec(int n, int max){
    vector<int> vec;
    srand((int)time(0));
    for(int i = 0; i < n; i++){
        vec.push_back(rand() % (max + 1));
    }
    return vec;
}

// ???????±??§£??°???????????§??°
int findMaxNumWithRec(vector<int> nums,int l , int r){
    if(l==r){
        return nums[l];
    }
    int m = (l + r) /2;
    int maxNum;
    maxNum = max(findMaxNumWithRec(nums,l,m), findMaxNumWithRec(nums,m+1,r));
    return maxNum;
}

int solve(int i, int m,int arr[],int n){
    if(m == 0){
        return 1;
    }
    if(i>= n){
        return 0;
    }
    int res = solve(i+1,m,arr,n) || solve(i+1,m-arr[i],arr,n);
    return res;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int m;
    while(q--){
        cin>>m;
        if(solve(0,m,arr,n)){
            printf("yes\n");
        }else {
            printf("no\n");
        }


    };










}