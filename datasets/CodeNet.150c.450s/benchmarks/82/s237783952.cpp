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
        return faces[0];
    }

    int front() {
        return faces[1];
    }

    int at(int n) {
        return faces[n];
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

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int top, front;
        cin >> top >> front;

        string r("EEEENN");
        for (string::iterator it = r.begin(); it != r.end(); ++it) {
            dice.roll(*it);
            if (dice.top() == top)
                break;
        }
        // cerr << dice.top() << "-" << dice.front() << endl;
        int d[4] = {1,2,4,3};
        int j;
        for (j = 0; j < 4; j++) {
            // cerr << "front: " << dice.at(d[j]) << endl;
            if (dice.at(d[j]) == front)
                break;
        }
        if (j < 3) {
            cout << dice.at(d[j+1]);
        } else {
            cout << dice.at(d[0]);
        }
        cout << endl;
    }
    return 0;
}