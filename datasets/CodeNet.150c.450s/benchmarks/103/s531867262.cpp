#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, s, *num, pattern;
void search(int th) {
  if (th == n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
      sum += num[i];
    if (s == sum) {
      for (int j = 0; j+1 < n; j++)
        if (num[j] >= num[j+1])
          return;
      /*                                                                                                                                                                                                                                                     
      for (int j = 0; j < n; j++)                                                                                                                                                                                                                            
        cout << num[j];                                                                                                                                                                                                                                      
      cout << endl;                                                                                                                                                                                                                                          
      */
      pattern++;
    }
  } else {
    int start = 0;
    if (th > 0)
      start = num[th-1]+1;
    for (int i = start; i < 10; i++) {
      num[th] = i;
      search(th + 1);
    }
  }
}

int main(int argc, char *argv[]) {
  vector<int> result;
  while (true) {
    cin >> n >> s;
    if (n == 0 && s == 0)
      break;
    num = new int[n];
    memset(num, 0, sizeof(int) * n);

    pattern = 0;
    search(0);
    result.push_back(pattern);
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}