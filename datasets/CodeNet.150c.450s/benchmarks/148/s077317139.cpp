#include <iostream>
#include <map>
#include <string>

int N;

int main() {
  std::cin >> N;
  std::map<std::string, int> freq;
  for (int i = 0; i < N; ++i) {
    std::string s;  std::cin >> s;
    freq[s]++;
  }

  std::cout << "AC x " << freq["AC"] << "\n";
  std::cout << "WA x " << freq["WA"] << "\n";
  std::cout << "TLE x " << freq["TLE"] << "\n";
  std::cout << "RE x " << freq["RE"] << "\n";

  return 0;
}