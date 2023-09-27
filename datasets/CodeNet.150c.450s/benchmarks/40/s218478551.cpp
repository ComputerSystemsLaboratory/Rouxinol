#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Dice
{
    vector<int> faces;

    Dice(vector<int>& f)
        : faces(f) {}

    int top() {
        return faces.front();
    }

    void roll(char direction) {
        int tmp;
        switch (direction) {
        case 'E': // 1,4,6,3 -> 4,6,3,1
            tmp = faces[0];
            faces[0] = faces[3];
            faces[3] = faces[5];
            faces[5] = faces[2];
            faces[2] = tmp;
            break;
        case 'N': // 1,2,6,5 -> 2,6,5,1
            tmp = faces[0];
            faces[0] = faces[1];
            faces[1] = faces[5];
            faces[5] = faces[4];
            faces[4] = tmp;
            break;
        case 'S': // 1,5,6,2 -> 5,6,2,1
            tmp = faces[0];
            faces[0] = faces[4];
            faces[4] = faces[5];
            faces[5] = faces[1];
            faces[1] = tmp;
            break;
        case 'W': // 1,3,6,4 -> 3,6,4,1
            tmp = faces[0];
            faces[0] = faces[2];
            faces[2] = faces[5];
            faces[5] = faces[3];
            faces[3] = tmp;
            break;
        }
    }
};

int main()
{
    vector<int> faces;
    for (int i = 0; i < 6; ++i) {
        int x;
        cin >> x;
        faces.push_back(x);
    }

    Dice dice(faces);
    string s;
    cin >> s;

    // cerr << s << endl;
    for (string::iterator it = s.begin(); it != s.end(); ++it) {
        dice.roll(*it);
        // cerr << *it << "->" << dice.top() << endl;
    }
    cout << dice.top() << endl;

    return 0;
}