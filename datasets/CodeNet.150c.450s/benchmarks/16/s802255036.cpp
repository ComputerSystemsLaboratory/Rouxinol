#include <iostream>
#include <string>
#include <tuple>
#include <stack>
#include <list>

using namespace std;

using pair_int = std::tuple<int, int>;
using point_t = pair_int;
using mt_data_list_t = std::list<std::tuple<int, point_t>>;

pair_int& operator+=(pair_int &l_location, const pair_int &r_location) {
   int l_x, l_y;
   std::tie(l_x, l_y) = l_location;
   int r_x, r_y;
   std::tie(r_x, r_y) = r_location;
   l_location = std::make_tuple(l_x + r_x, l_y + r_y);
   return l_location;
}

class Mountain {

public:
   Mountain() :
      is_going_up{ false },
      location{},
      location_par_height{},
      pond_list{} {
   }

   void Push(const char word) {
      switch(word) {
      case '/': {
         int x = std::get<0>(location);
         location += point_t{ 1, 1 };
         int y = std::get<1>(location);

         if (location_par_height.empty()) { return; }
         const int slope_x = location_par_height.top();
         int area = x - slope_x;
         location_par_height.pop();
         if (is_going_up) {
            auto itr = pond_list.rbegin();
            if (itr != pond_list.rend()) {
               ++itr;
            }
            while (itr != pond_list.rend()) {
               int pond_x, pond_y;
               std::tie(pond_x, pond_y) = std::get<1>(*itr);
               if (pond_x < slope_x || pond_y >= y) {
                  break;
               }
               area += std::get<0>(pond_list.back());
               pond_list.pop_back();
               itr = pond_list.rbegin();
               if (itr != pond_list.rend()) {
                  ++itr;
               }
            }
            std::get<0>(pond_list.back()) += area;
            std::get<1>(pond_list.back()) += point_t{ 0, 1 };
         } else {
            const auto& pond_location = std::make_tuple(x, y);
            pond_list.emplace_back(std::make_tuple(area, pond_location));
         }

         is_going_up = true;
         break;
      }
      case '_': {
         location += point_t{ 1, 0 };
         break;
      }
      case '\\': {
         int x = std::get<0>(location);
         location_par_height.push(x);
         location += point_t{ 1, -1 };

         is_going_up = false;
         break;
      }
      }
   }

   void Print() {
      std::string ret_text{ std::to_string(pond_list.size()) };
      int area_sum = 0;
      for (const auto& pond : pond_list) {
         int area = std::get<0>(pond);
         area_sum += area;
         ret_text += " " + std::to_string(area);
      }
      cout << std::to_string(area_sum) << endl << ret_text << endl;
   }

private:
   bool is_going_up;
   point_t location;
   std::stack<int> location_par_height;
   mt_data_list_t pond_list;

};

int main () {

   Mountain mt;
   char word;
   while (cin >> word) {
      mt.Push(word);
   }

   mt.Print();

   return 0;

}