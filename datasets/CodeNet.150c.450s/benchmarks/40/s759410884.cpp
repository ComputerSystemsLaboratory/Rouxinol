#include <iostream>
#include <string>

#define MAX_LEN (100)

using namespace std;

class Dice {
      private:
              int value[6];
              int top;
     
      public:             
              Dice(int value[]) {             
                   for (int i = 0; i < 6; i++) {
                        this->value[i] = value[i];
                   }
                   
                   this->top = value[0];
              }
              
              void swap(int& a, int& b) {
                   int temp = a;
                   a = b;
                   b = temp;
              }

              void move_N(int value[]) {
                   this->swap(value[0], value[1]);
                   this->swap(value[1], value[5]);
                   this->swap(value[5], value[4]);

                   this->top = value[0];
              }

              void move_E(int value[]) {
                   this->swap(value[0], value[3]);
                   this->swap(value[3], value[5]);
                   this->swap(value[5], value[2]);
 
                   this->top = value[0];
              }

              void move_W(int value[]) {
                   this->swap(value[0], value[2]);
                   this->swap(value[2], value[5]);
                   this->swap(value[5], value[3]);

                   this->top = value[0];
              }

              void move_S(int value[]) {
                   this->swap(value[0], value[4]);
                   this->swap(value[4], value[5]);
                   this->swap(value[5], value[1]);

                   this->top = value[0];
              }

              int Get_top() {
                  return (this->top);
              }
};

int main()
{
    int    value[6];  
    string inst;

    for (int i = 0; i < 6; i++) {
         do {
             cin >> value[i];
         } while (value[i] < 0 || value[i] > 100);
    }

    Dice dice(value);

    do {
        cin >> inst;
    } while (inst.length() < 0 || inst.length() > MAX_LEN);
        
    for (int i = 0; inst[i] != '\0'; i++){
         if (inst[i] == 'N') {
             dice.move_N(value);
         } else if (inst[i] == 'E') {
             dice.move_E(value);
         } else if (inst[i] == 'W') {
             dice.move_W(value);
         } else if (inst[i] == 'S') {
             dice.move_S(value);
         }
    }

    cout << dice.Get_top() << endl;

    return (0);
}