#include"iostream"
using namespace std;
long long java[100], n;
long long memo[101][21];
long long rec(int index, int sum){
  if( sum < 0 || sum > 20) return 0;
  if( memo[index][sum]) return memo[index][sum];
  if( index == n - 1) return sum == java[n - 1];
  return memo[index][sum] = rec( index + 1, sum + java[index]) + rec( index + 1, sum - java[index]);
}
int main(){
  cin >> n;
  for(int i = 0 ; i < n ; i++ ) cin >> java[i];
  cout << rec( 1, java[0]) << endl;
}