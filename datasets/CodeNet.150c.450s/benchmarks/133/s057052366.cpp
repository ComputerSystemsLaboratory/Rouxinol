#include <bits/stdc++.h>
using namespace std;
#define forN(N) if(N >= 0)for(size_t i = 0;i < N;++i)
typedef unsigned long long ul ;

long getScore(ul D,vector<int>c,vector<vector<int>>s,vector<int>select){
  long long sum = 0;
  int last[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
  forN(D){
    int score = 0;
    int t = select[i];
    score += s[i][t];
    last[t] = i;
    for(int j = 0;j < 26;++j){
      score -= (i - last[j]) * c[j];
    }
    sum += score;

    //cout << score << endl;
    cout << sum << endl;
  }
  //cout << sum << endl;
  
  return sum;
}

int main() {
  ul D;
  vector<int>c;
  vector<int>last;
  vector<int>best;
  vector<vector<int>>s;
  cin >> D;
  forN(26){
    int t;
    cin >> t;
    c.push_back(t);
    last.push_back(-1);
  }
  forN(D){
    vector<int> tv;
    int maxI = -1;
    int maxN = -1;
    for(int j = 0;j < 26;++j){
      int t;
      cin >> t;
      tv.push_back(t);
      int nnn = (t + (c[j] * (i - last[j])));
      //cout << nnn << ",";
      if(maxN < nnn){
		maxN = nnn;
        maxI = j;
      }
    }
    last[maxI] = i;
    s.push_back(tv);
    best.push_back(maxI);
  }
  forN(D){
	//cout << best[i] + 1 << endl;
  }
  
  ///*
  best.clear();
  forN(D){
    int t;
    cin >> t;
    best.push_back(t - 1);
  }
  //*/
  
  getScore(D,c,s,best);
  ///cout << "sum:" << getScore(D,c,s,best) << endl;
}
