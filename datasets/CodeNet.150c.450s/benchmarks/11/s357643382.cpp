#include <iostream>
#include <map>

#define KIND_COUNT 4
#define TOTAL_COUNT 13

int main(void) {
  int n = 0;
  char kind = 0;
  int card = 0;
  
  bool cards[KIND_COUNT][TOTAL_COUNT] = {false};
  
  std::map<char, int> nameKinds;
  std::map<int, char> valueKinds;  

  nameKinds.insert(std::map<char, int>::value_type('S', 0));
  nameKinds.insert(std::map<char, int>::value_type('H', 1));
  nameKinds.insert(std::map<char, int>::value_type('C', 2));
  nameKinds.insert(std::map<char, int>::value_type('D', 3));

  valueKinds.insert(std::map<int, char>::value_type(0, 'S'));
  valueKinds.insert(std::map<int, char>::value_type(1, 'H'));
  valueKinds.insert(std::map<int, char>::value_type(2, 'C'));
  valueKinds.insert(std::map<int, char>::value_type(3, 'D'));    

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> kind >> card;
    
    cards[nameKinds[kind]][card - 1] = true;
  }

  for (int i = 0; i < KIND_COUNT; i++) {
    for (int j = 0; j < TOTAL_COUNT; j++) {
      if (!cards[i][j]) {
	
	std::cout << valueKinds[i] << " " << (j + 1) << std::endl;
      }
    }
  }

  return 0;
}