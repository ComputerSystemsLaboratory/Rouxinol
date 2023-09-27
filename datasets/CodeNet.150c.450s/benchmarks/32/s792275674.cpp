#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f

#include <iostream>
#include <cstdio>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>
  
using namespace std;
  
typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;
  
static const double EPS = 1e-8;
  
int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

int main(){
  int num_student;
  int num_min_pass;
  int num_max_pass;
  while(~scanf("%d %d %d", &num_student, &num_min_pass, &num_max_pass)) {
    if (num_student == 0) break;

    int score[10000];
    for (int student_i = 0; student_i < num_student; student_i++) {
      scanf("%d", &score[student_i]);
    }
    sort(score,score + num_student, greater<int>());
    int diff = -1;
    int res = 0;
    for (int pass_i = num_min_pass - 1; pass_i < num_max_pass; pass_i++) {
      int min_pass_score = score[pass_i];
      int max_fail_score = score[pass_i + 1];
      if (diff <= min_pass_score - max_fail_score) {
	diff = min_pass_score - max_fail_score;
	res = pass_i + 1;
      }
    }
    printf("%d\n",res);
  }
}