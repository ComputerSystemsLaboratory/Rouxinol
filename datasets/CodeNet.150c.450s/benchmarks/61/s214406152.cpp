#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, n|a|b|c|x) {
        vector<int> vi;
        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;
            vi.push_back(y);
        }
        int frame = 0;
        for (int i = 0; i < vi.size(); frame++) {
            if (frame > 10000) {
                frame = -1;
                break;
            }
            if (x == vi[i])
                i++;
            if (i >= vi.size())
                break;
            x = (a*x+b) % c;
        }
        cout << frame << endl;
    }
    return 0;
}