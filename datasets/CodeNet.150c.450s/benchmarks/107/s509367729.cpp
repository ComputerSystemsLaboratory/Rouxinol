#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
typedef long long ll;

template <class S> int LevenshteinDistance(const S &A, const S &B) {
   vector< vector<int> > dist(A.size()+1,vector<int>(B.size()+1));
   for (int i = 0; i <= A.size(); i++) dist[i][0] = i;
   for (int i = 0; i <= B.size(); i++) dist[0][i] = i;
   for (int i = 0; i < A.size(); i++) {
      for (int j = 0; j < B.size(); j++) {
         dist[i+1][j+1] = min(dist[i][j+1], dist[i+1][j]) + 1;
         dist[i+1][j+1] = min(dist[i+1][j+1], dist[i][j] + (A[i]!=B[j]));
      }
   }
   return dist[A.size()][B.size()];
}

int main() {

  string A,B; cin >> A >> B;

  cout << LevenshteinDistance(A,B) << endl;

  return 0;
}