#include <iostream>
using namespace std;


int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int Y, M, D;
        cin >> Y >> M >> D;
        
        int res = 1;
        for(; D < ((Y % 3 == 0 || M % 2 == 1) ? 20 : 19); D++) res++;
        for(; M < 10; M++) res += ((Y % 3 == 0 || (M+1) % 2 == 1) ? 20 : 19);
        for(; Y < 999; Y++) res += ((Y+1) % 3 == 0 ? 20 * 10 : 20 * 5 + 19 * 5);

        cout << res << endl;
    }
}