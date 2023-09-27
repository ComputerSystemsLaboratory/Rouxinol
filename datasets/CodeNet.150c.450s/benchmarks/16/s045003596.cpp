#include <bits/stdc++.h>
using namespace std;

using result = tuple<int, vector<int>>;

result find_bottom(const string &S, int &cp) {
  int L = S.size();
  int depth = 0;
  vector<int> unsco;
  for (int i = cp; i < L; i++) {
    char C = S.at(i);
    switch (C) {
    case '\\':
      depth++;
      continue;
    case '_':
      unsco.push_back(depth);
      continue;
    case '/':
      cp = i;
      return make_tuple(depth, unsco);
    }
  }
  cp = L;
  return make_tuple(0, vector<int>(0));
}

result find_ceiling(const string &S, int &cp) {
  int L = S.size();
  int depth = 0;
  vector<int> unsco;
  for (int i = cp; i < L; i++) {
    char C = S.at(i);
    switch (C) {
    case '/':
      depth++;
      continue;
    case '_':
      unsco.push_back(depth);
      continue;
    case '\\':
      cp = i;
      return make_tuple(depth, unsco);
    }
  }
  cp = L;
  return make_tuple(depth, unsco); // when end with '/', use last result
}

int main() {
  string S;
  cin >> S;
  int L = S.size();

  if (L == 1) {
    cout << 0 << endl;
    cout << 0 << endl;
    return 0;
  }

  int count = 0;
  int start = 0;
  // Ignore 1st ascendant
  for (; start < L; start++) {
    char C = S.at(start);
    if (C == '/' || C == '_') continue;
    else break;
  }
 
  if (start >= L) {
    cout << 0 << endl;
    cout << 0 << endl;
    return 0;
  }

  int h = 0; // height
  vector<int> points(0);
  vector<vector<int>> unscos(0);
  // Pass 1: Save all edges
  int d1, d2;
  while (start < L) {
    vector<int> u1, u2;
    tie(d1, u1) = find_bottom(S, start);
    if (d1 == 0) break;
    h -= d1;
    points.push_back(h);
    unscos.push_back(u1);
    tie(d2, u2) = find_ceiling(S, start);
    h += d2;
    points.push_back(h);
    unscos.push_back(u2);
  }
  int np = points.size();
  if (np == 0) {
    cout << 0 << endl;
    cout << 0 << endl;
    return 0;  
  }

  // Pass 2: Make Max Height list after the point
  vector<int> max_after(np);
  int cmax = points.at(np - 1);
  for (int i = np - 1; i >= 0; i--) {
    int cur = points.at(i);
    if (cur > cmax) cmax = cur;
    max_after.at(i) = cmax;
  }

  // Pass 3: Calc each area and sum of them
  int ALL_A = 0;
  int LH = 0; // Left side height
  int cur = 0;
  vector<int> Track_A(0);
  while (cur < np) {
    // 1st point is always the bottom
    int h1 = points.at(cur);
    vector<int> us1 = unscos.at(cur);
    if (++cur >= np) break;
    int h2 = points.at(cur);
    vector<int> us2 = unscos.at(cur);
    int A = 0;
    if (LH <= h2) {
      int d = abs(h1 - LH);
      A = d * d; // Including right side
      for (int x : us1) A += x;
      for (int x : us2) {
        if (h1 + x > LH) continue; // drop higher unsco
        A += LH - (h1 + x);
      }
    } else { // Calc A until the max point
      int m = max_after.at(cur);
      if (m > LH) m = LH;
      int d = abs(h1 - m); // D is virtual height.
      A = d * d;
      int diff = abs(m - LH);
      for (int x : us1) {
        if (LH - x > m) continue;
        A += x - diff; // Unsco between LH and P1
      }
      for (int x : us2) A += m - h1 - x;   // Unsco between P1 and P2
      while (h2 < m) {
        LH = h2;
        h1 = points.at(++cur);
        int l = abs(h1 - LH); // length from LH to H1;
        A += l * l + 2 * l * abs(m - LH);
        us1 = unscos.at(cur);
        for (int x : us1) A += abs(LH - x - m); // Desc
        h2 = points.at(++cur);
        us2 = unscos.at(cur);
        for (int x : us2) {
          if (h1 + x >= m) continue;
          A += abs(h1 + x - m); // Asc
        }
      }
    }
    ALL_A += A;
    Track_A.push_back(A);
    cur++;
    LH = h2;
  }

  // OUTPUT
  cout << ALL_A << endl;
  cout << Track_A.size() << " ";
  for (int i = 0; i < Track_A.size(); i++) {
    cout << Track_A.at(i);
    if (i == Track_A.size() - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
