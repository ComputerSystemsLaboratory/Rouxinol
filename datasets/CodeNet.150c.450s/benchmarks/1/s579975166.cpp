#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1 << 30;


int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> dp(n);
    for(int i=0;i<n;i++){
      cin >> A[i];
      dp[i] = MAX;
    }
    
    /// 1 2 3
    /// 2 3 1 -> [2] -> [2][3] -> [1][3]
    /// 1 1 1 -> [1] -> [1]
    
    /*
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(A[i]<=dp[j]){
          dp[j] = A[i];
          break;
        }
      }
    }
    */
    for(int i=0;i<n;i++){
      vector<int>::iterator it = lower_bound(dp.begin(), dp.end(), A[i]);
      *it = A[i];
    }
    
    /*
    for(int i=0;i<n;i++){
      cout << dp[i] << " ";
    }
    cout << endl;
    */
    
    int count = 0;
    for(int i=0;i<n;i++){
      if(dp[i]<MAX){
        count++;
      } else{
        break;
      }
    }
    
    cout << count << endl;
}

