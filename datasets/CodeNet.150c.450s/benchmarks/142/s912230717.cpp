#include <iostream>
#include <vector>
using namespace std;
 
vector<string> getResult(uint K, uint N, vector<unsigned long long> A){
  vector<string> results;
  for(uint i = K; i < N; i++){
    results.push_back((A[i] > A[i - K])? "Yes" : "No");
  }
  return results;
}
 
int main(){
  uint N, K;
  cin >> N >> K;
  
  vector<unsigned long long> A(N);
  for(uint i = 0; i < N; i++){
    cin >> A[i];
  }
  
  vector<string> results = getResult(K, N, A);  
  for(string result : results){
	cout << result << endl;
  }
  return 0;
}