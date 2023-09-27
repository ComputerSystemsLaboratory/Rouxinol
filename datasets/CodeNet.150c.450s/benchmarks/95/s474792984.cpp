#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    while (cin >> n, n){
        int cnt = 0;

        string before;
        bool up = false;
        bool lu = false;
        bool ru = false;
        while (n-- > 0){
            string step;
            cin >> step;

            if (step == "lu"){
                lu = true;
                if (ru && !up){
                    cnt++;
                    up = true;
                }
            }
            else if (step == "ru"){
                ru = true;
                if (lu && !up){
                    cnt++;
                    up = true;
                }
            }
            else if (step == "ld"){
                lu = false;
                if (!ru && up){
                    cnt++;
                    up = false;
                }
            }
            else if (step == "rd"){
                ru = false;
                if (!lu && up){
                    cnt++;
                    up = false;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}