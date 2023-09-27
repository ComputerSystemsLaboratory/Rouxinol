#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

class dice
{
    private:
        int roll[6];

    public:
        explicit dice(int in[6]){
            for (int i = 0; i < 6; i++)
                roll[i] = in[i];
        }

        void move(const char c){
            int tmp;
            switch(c){
                case 'N':
                    tmp = roll[0];
                    roll[0] = roll[1];
                    roll[1] = roll[5];
                    roll[5] = roll[4];
                    roll[4] = tmp;
                    break;

                case 'E':
                    tmp = roll[0];
                    roll[0] = roll[3];
                    roll[3] = roll[5];
                    roll[5] = roll[2];
                    roll[2] = tmp;
                    break;

                case 'W':
                    tmp = roll[0];
                    roll[0] = roll[2];
                    roll[2] = roll[5];
                    roll[5] = roll[3];
                    roll[3] = tmp;
                    break;

                case 'S':
                    tmp = roll[0];
                    roll[0] = roll[4];
                    roll[4] = roll[5];
                    roll[5] = roll[1];
                    roll[1] = tmp;
                    break;

                default:
                    cout << "Wrong Direction: "
                         << c << endl;
                    break;
            }
        }
        int operator()(size_t i){
            return roll[i];
        }
};

int main()
{
    int eye[6];
    char c;

    for (int i = 0; i < 6; i++)
        cin >> eye[i];

    dice d(eye);

    getchar();

    c = getchar();

    while (c!='\n'){
        d.move(c);
        c = getchar();
    }

    cout << d.operator()(0) << endl;
    
    return 0;
} 
