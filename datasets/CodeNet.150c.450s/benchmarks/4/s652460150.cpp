#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  vector<string> grades;
  while (true) {
    int m, f, r;
    fscanf(stdin, "%d %d %d", &m, &f, &r);
    if (m == -1 && f == -1 && r == -1) { break; }
    string grade;
    int sum = m + f;
    if (m == -1 || f == -1) { grade = "F"; }
    else if (sum >= 80) { grade = "A"; }
    else if (65 <= sum && sum < 80) { grade = "B"; }
    else if (50 <= sum && sum < 65) { grade = "C"; }
    else if (30 <= sum && sum < 50) {
      grade = "D";
      if (r >= 50) { grade = "C"; }
    }
    else if (sum < 30) { grade = "F"; }
    grades.push_back(grade);
  }
  for (int i = 0; i < grades.size(); ++i) {
    fprintf(stdout, "%s\n", grades[i].c_str());
  }
  return 0;
}