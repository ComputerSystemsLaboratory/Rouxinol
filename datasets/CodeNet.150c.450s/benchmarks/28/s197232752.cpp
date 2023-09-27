#include <iostream>
#include <climits>

const int MAX_N = 100000;
const int MAX_K = 100000;

bool calculateWeight(int n, int k, int w[], int maxWeight) {
  int j = 0;
  int m = 0;

  int sum = 0;

  bool success = false;

  while ((j < n) && (m < k)) {
    if (w[j] > maxWeight) {
      return false;
    }
      
    if ((sum + w[j]) <= maxWeight) {
      sum += w[j];
      j++;
    } else {
      m++;
      sum = 0;
    }
  }
    
  if (j == n) {
    success = true;
  }

  return success;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  
  int n = 0;
  int k = 0;

  int w[MAX_N] = {0};

  std:: cin >> n;
  std:: cin >> k;

  int minWeight = INT_MAX;
  int maxWeight = 0;

  for (int i = 0; i < n; i++) {
    std:: cin >> w[i];

    if (w[i] < minWeight) {
      minWeight = w[i];
    }

    maxWeight += w[i];
  }

  int weight = INT_MAX;

  int left = minWeight;
  int right = maxWeight;
  
  while (left <= right) {
    int middle = (left + right) / 2;

    //    std::cout << left << " " << middle << " " << right << std::endl;    

    if (calculateWeight(n, k, w, middle) && (middle < weight)) {
      weight = middle;
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }

  std::cout << weight << std::endl;

  return 0;
}