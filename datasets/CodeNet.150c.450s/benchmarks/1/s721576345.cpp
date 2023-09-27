#include <bits/stdc++.h>
using namespace std;

int GetCeilIndex(vector<int> &arr, vector<int> &tailIndices, int l, int r, int key){ //Use &x for Quick Reference
    while ((r-l) > 1){ //Perform Binary Search
        int m = l+(r-l)/2;
        if (arr[tailIndices[m]] >= key){
            r = m;
        } else {
            l = m;
        }
    }
    return r; //Return the Valid Index
}
 
int LongestIncreasingSubsequence(vector<int> &arr, int n) {
    vector<int> tailIndices(n, 0); //Generate a vector, of size n, filled with 0s
    int len = 1; //Default the Len to 1, since the Smallest Possible Increasing Subsequence will be 1
    for (int i = 1; i < n; i++) { //Iterate Through arr[]
        if (arr[i] < arr[tailIndices[0]]){
            tailIndices[0] = i;
        } else if (arr[i] > arr[tailIndices[len-1]]){
            tailIndices[len++] = i; //Incriment len by 1 as a Longer Increasing Subsequence has been Found
        } else {
            int pos = GetCeilIndex(arr, tailIndices, -1, len-1, arr[i]); //Possible New Longest Increasing Subsequence
            tailIndices[pos] = i;
        }
    }
    return len; //Return the Final Length of the Longest Increasing Subsequence
}
 
int main(){
    int n;
    cin >> n;
    vector<int> x(n); //Although vector<int>s will Fail the Test Cases, Performing Referencing Makes it Pass Test Cases
    for(int i = 0; i < n; i++){
        cin >> x[i];
    } //Finished Resolving Inputs
    cout << LongestIncreasingSubsequence(x, n) << endl; //Perform Solve Function
    return 0;
}

