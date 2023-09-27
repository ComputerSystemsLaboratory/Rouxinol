#include <iostream>
#include <map>

int rec_fibonacci(int n, std::map<int, int>* m) {
  if (n == 0 || n == 1)
    return 1;
  if (m->find(n) == m->end())
    (*m)[n] = rec_fibonacci(n-1, m) + rec_fibonacci(n-2, m);
  return (*m)[n];
}

int fibonacci(int n) {
  std::map<int, int> m;
  return rec_fibonacci(n, &m);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << fibonacci(n) << std::endl;
}