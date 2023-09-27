#include <iostream>

using namespace std;

template<typename T>
class Dice {

private:
   void Init() {
      upId = 0;
      frontId = 1;
      rightId = 2;
   }

public:
   Dice() :
      number{1, 2, 3, 4, 5, 6}
   {
      Init();
   }
   Dice(T (&n)[6]) :
      number{n[0], n[1], n[2], n[3], n[4], n[5]}
   {
      Init();
   }
   virtual ~Dice() {;}

   enum Direction {
      north,
      south,
      east,
      west
   };

   void Roll(Direction direction) {
      switch (direction) {
      case north: {
         int tmp = upId;
         upId = frontId;
         frontId = 5 - tmp;
         break;
      }
      case south: {
         int tmp = frontId;
         frontId = upId;
         upId = 5 - tmp;
         break;
      }
      case east: {
         int tmp = rightId;
         rightId = upId;
         upId = 5 - tmp;
         break;
      }
      case west: {
         int tmp = upId;
         upId = rightId;
         rightId = 5 - tmp;
         break;
      }
      }
   }

   T Print() {
      return number[upId];
   }   

   T Search(T up, T front) {
      int downId = 5 - upId;
      int backId = 5 - frontId;
      int leftId = 5 - rightId;
      
      if (number[frontId] == up) {
         Roll(north);
      } else if (number[rightId] == up) {
         Roll(west);
      } else if (number[downId] == up) {
         Roll(north);
         Roll(north);
      } else if (number[backId] == up) {
         Roll(south);
      } else if (number[leftId] == up) {
         Roll(east);
      }

      downId = 5 - upId;
      backId = 5 - frontId;
      leftId = 5 - rightId;

      if (number[frontId] == front) {
         return number[rightId];
      } else if (number[rightId] == front) {
         return number[backId];
      } else if (number[backId] == front) {
         return number[leftId];
      } else if (number[leftId] == front) {
         return number[frontId];
      }
      return 0;
   }

private:
   T number[6];
   int upId;
   int frontId;
   int rightId;

};

int main() {

   int number[6]{};
   for (int i = 0; i < 6; ++i) {
      cin >> number[i];
   }

   int n{};
   cin >> n;
   while (n--) {
      int up{}, front{};
      cin >> up >> front;
      
      Dice<int> dice(number);
      cout << dice.Search(up, front) << endl;;
   }

   return 0;

}