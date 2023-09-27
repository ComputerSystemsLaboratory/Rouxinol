#include<iostream>
#include<algorithm>
#define DUMMY 'X'
#define INF 1000000001
using namespace std;

int partition(pair<char, int> array[], int p, int r) {
  pair<char, int> x = array[r];
  int i = p - 1;
  for(int j = p; j < r; j++) {
    if(array[j].second <= x.second) {
      i++;
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[r]);
  
  return i + 1;
}


void quickSort(pair<char, int> deck[], int begin, int end) {
  if(begin < end) {
    int index = partition(deck, begin, end);
    quickSort(deck, begin, index - 1);
    quickSort(deck, index + 1, end);
  }
}

pair<char, int> L[50001];
pair<char, int> R[50001];

void merge(pair<char, int> array[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  for(int i = 0; i < n1; i++) {
    L[i] = array[left + i];
  }
  for(int i = 0; i < n2; i++) {
    R[i] = array[mid + i];
  }
  L[n1] = make_pair(DUMMY, INF);
  R[n2] = make_pair(DUMMY, INF);

  int i = 0;
  int j = 0;

  for(int k = left; k < right; k++) {
    if(L[i].second <= R[j].second) {
      array[k] = L[i];
      i++;
    }
    else {
      array[k] = R[j];
      j++;
    }
  }
}

void mergeSort(pair<char, int> array[], int left, int right) {
  if(left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid, right);
    merge(array, left, mid, right);
  }
}


int main(void) {
  int n;
  char c;
  int cardNum;

  cin >> n;
  pair<char, int> deck[100000];
  pair<char, int> copy[100000];

  for(int i = 0; i < n; i++) {
    cin >> c;
    cin >> cardNum;

    pair<char, int> d = make_pair(c, cardNum);
    deck[i] = d;
    copy[i] = d;
  }

  mergeSort(copy, 0, n);
  quickSort(deck, 0, n - 1);

  bool isStable = true;
  for(int i = 0; i < n; i++) {
    if(copy[i].first != deck[i].first) {
      cout << "Not stable" << endl;
      isStable = false;
      break;
    }
  }
  if(isStable) {
    cout << "Stable" << endl;
  }

  for(int i = 0; i < n; i++) {
    cout << deck[i].first << " " << deck[i].second << endl;
  }
  return 0;
}