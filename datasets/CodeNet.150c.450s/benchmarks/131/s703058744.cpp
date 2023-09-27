#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int arrayToInt(int *array, int size) {
  int result = 0;
  for(int i = size-1; i >= 0; i--) {
    result += array[i] * pow(10, size - i - 1);
  }
  return result;
}

void strToArray(string str, int l, int *num, int *rnum) {
  for(int i = l-1; i >= 0; i--) {
    if(i-(l-str.size()) >= 0) {
      num[i] = rnum[i] = ctoi(str[i-(l-str.size())]);
    } else {
      num[i] = rnum[i] = 0;
    }
  }
}

int main() {
  while(1) {
    vector<int> a;
    int l;
    string str;
    cin >> str >> l;
    int num[l];
    int rnum[l];
    strToArray(str, l, num, rnum);
    if(arrayToInt(num, l) + l == 0) return 0;
    a.push_back(arrayToInt(num, l));
    sort(num, num+l);
    sort(rnum, rnum+l, greater<int>());

    int result;
    while(1) {
      result = arrayToInt(rnum, l) - arrayToInt(num, l);
      if(find(a.begin(), a.end(), result) != a.end()) break;
      else a.push_back(result);
      string temp = to_string(result);
      strToArray(temp, l, num, rnum);
      sort(num, num+l);
      sort(rnum, rnum+l, greater<int>());
    }

    int i = a.size();
    for(int j = 0; j < a.size(); j++) {
      if(a[j] == result) {
        cout << j << " " << result << " " << i - j << endl;
        break;
      }
    }
  }
}

