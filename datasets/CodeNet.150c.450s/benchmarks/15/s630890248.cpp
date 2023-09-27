#include <iostream>
#include <list>

using namespace std;

int Count_same_element(const std::list<int>& base, const std::list<int>& other) {

   int count = 0;
   for (const auto base_element : base) {
      for (const auto other_element : other) {
         if (other_element != base_element) { continue; }
         ++count;
         break;
      }
   }

   return count;

}

std::list<int> Create_input_list() {

   std::list<int> list;
   int size;

   cin >> size;
   while (size--) {
      int value;
      cin >> value;
      list.emplace_back(value);
   }

   return std::move(list);

}

int main() {

   std::list<int> S{ Create_input_list() };
   std::list<int> T{ Create_input_list() };

   cout << Count_same_element(T, S) << endl;

   return 0;

}