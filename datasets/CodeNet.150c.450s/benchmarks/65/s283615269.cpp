#include <iostream>
#include <string>
#include <vector>

int extractNumber(const std::string& str) {
  return std::stoi(str.substr(1));
}

std::vector<std::string> bubbleSort(std::vector<std::string> c, const int& n) {
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j > i; --j) {
      if (extractNumber(c[j]) < extractNumber(c[j - 1]))
        std::swap(c[j], c[j - 1]);
    }
  }
  return c;
}

std::vector<std::string> selectionSort(std::vector<std::string> c, const int& n) {
  for (int i = 0; i < n; ++i) {
    int minj = i;
    for (int j = i; j < n; ++j) {
      if (extractNumber(c[j]) < extractNumber(c[minj]))
        minj = j;
    }
    std::swap(c[i], c[minj]);
  }
  return c;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<std::string> c;
  for (int i = 0; i < n; ++i) {
    std::string str;
    std::cin >> str;
    c.push_back(str);
  }
  std::vector<std::string> bSorted = bubbleSort(c, n);
  for (int i = 0; i < n; ++i) {
    std::cout << bSorted[i];
    if (i == n - 1)
      std::cout << std::endl;
    else
      std::cout << " ";
  }
  std::cout << "Stable" << std::endl;

  std::vector<std::string> sSorted = selectionSort(c, n);
  bool stable = true;
  for (int i = 0; i < n; ++i) {
    std::cout << sSorted[i];
    if (i == n - 1)
      std::cout << std::endl;
    else
      std::cout << " ";
    if (sSorted[i] != bSorted[i])
      stable = false;
  }
  if (stable)
    std::cout << "Stable" << std::endl;
  else
    std::cout << "Not stable" << std::endl;
}