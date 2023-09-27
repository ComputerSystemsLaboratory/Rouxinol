#include <iostream>
#include <list>
#include <iterator>

using count_t = std::size_t;

class Truck {

public:
   bool Empty() const {
      return Weight() == 0;
   }

   count_t Weight() const {
      return weight;
   }

   count_t Front() const {
      return cargo.front();
   }

   count_t Back() const {
      return cargo.back();
   }

   void Push_Front(count_t weight) {
      cargo.emplace_front(weight);
      this->weight += weight;
   }

   void Push_Back(count_t weight) {
      cargo.emplace_back(weight);
      this->weight += weight;
   }

   count_t Pop_Front() {
      int weight = Front();
      cargo.pop_front();
      this->weight -= weight;
      return weight;
   }

   count_t Pop_Back() {
      int weight = Back();
      cargo.pop_back();
      this->weight -= weight;
      return weight;
   }

private:
   std::list<count_t> cargo;
   count_t weight;

};

class Truck_Manager {

public:
   Truck_Manager() :
      capacity{ 0 },
      pre_capacity{ 0 },
      min_weight{ 0 },
      truck_list{} {
   }

   void Capacity(count_t capacity) {
      if (capacity < min_weight) {
         capacity = min_weight;
      }
      if (capacity == this->capacity) { return; }

      pre_capacity = this->capacity;
      this->capacity = capacity;
      Allocation();
   }

   count_t Capacity() const {
      return capacity;
   }

   count_t Size() const {
      return truck_list.size();
   }

   void Push(count_t weight) {
      if (weight > capacity) {
         min_weight = weight;
         Capacity(weight);
      }
      if (truck_list.empty()) {
         truck_list.emplace_back();
         truck_list.back().Push_Front(weight);
         return;
      }

      auto && truck = truck_list.back();
      if (truck.Weight() + weight > capacity) {
         truck_list.emplace_back();
         truck_list.back().Push_Front(weight);
      } else {
         truck.Push_Back(weight);
      }
   }

private:
   void Allocation() {
      if (capacity > pre_capacity) {
         const auto itr_end = truck_list.end();
         auto itr = truck_list.begin();
         auto itr_other = std::next(itr);
         for (; itr != itr_end; ++itr) {
            if (itr_other == itr) {
               ++itr_other;
            }
            for (; itr_other != itr_end; ++itr_other) {
               while (!itr_other->Empty()) {
                  if (itr->Weight() + itr_other->Front() > capacity) { break; }

                  itr->Push_Back(itr_other->Pop_Front());
               }

               if (itr->Weight() + itr_other->Front() > capacity) { break; }
            }
         }
         auto Empty = [](const Truck & truck) {
            return truck.Empty();
         };
         truck_list.remove_if(Empty);
      } else {
         std::list<count_t> heap;
         for (auto itr = truck_list.begin(); itr != truck_list.end(); ++itr) {
            while (!heap.empty()) {
               itr->Push_Front(heap.back());
               heap.pop_back();
            }
            while (itr->Weight() > capacity) {
               heap.emplace_front(itr->Pop_Back());
            }
            if (!heap.empty() && std::next(itr) == truck_list.end()) {
               truck_list.emplace_back();
            }
         }
      }
   }

   count_t capacity;
   count_t pre_capacity;
   count_t min_weight;
   std::list<Truck> truck_list;

};

int main() {

   count_t n, k;
   std::cin >> n >> k;

   count_t sum = 0;
   Truck_Manager allocator;

   while (n--) {
      count_t tmp;
      std::cin >> tmp;
      allocator.Push(tmp);
      sum += tmp;
   }

   allocator.Capacity(sum / k);

   while(allocator.Size() > k) {
      allocator.Capacity(allocator.Capacity() + 1);
   }

   std::cout << allocator.Capacity() << std::endl;

   return 0;

}