#include <iostream>
#include <vector>

using namespace std;

int game(int num, int stone)
{
        int i = 0, in_the_box = stone;
        vector<int> mayor(num, 0);
        while(1){
                if(in_the_box != 0){
                        mayor[i] += 1;
                        in_the_box -= 1;
                        if(mayor[i] == stone){
                                break;
                        }
                }else if(mayor[i] != 0){
                        in_the_box = mayor[i];
                        mayor[i] = 0;
                }

                i = (i + 1) % num;
        }
        return i;
}

int main(void)
{
        int i, n, p, next_mayor;

        while(1){
                cin >> n >> p;
                if(n == 0 && p == 0)
                        break;

                next_mayor = game(n, p);
                cout << next_mayor << endl;
        }
        return 0;
}