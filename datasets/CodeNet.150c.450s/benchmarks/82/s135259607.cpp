#include <bits/stdc++.h>
using namespace std;

class dice {
private :
    map<string, int> face_num;
public :
    dice() {}
    dice(map<string, int> &face_num) {
        this->face_num = face_num;
    }

    void roll(const char &direction) {
        if (direction == 'E') {
            swap(face_num["top"], face_num["left"]);
            swap(face_num["right"], face_num["left"]);
            swap(face_num["bottom"], face_num["left"]);
        }
        else if (direction == 'N') {
            swap(face_num["front"], face_num["bottom"]);
            swap(face_num["top"], face_num["bottom"]);
            swap(face_num["back"], face_num["bottom"]);
        }
        else if (direction == 'S') {
            swap(face_num["top"], face_num["back"]);
            swap(face_num["front"], face_num["back"]);
            swap(face_num["bottom"], face_num["back"]);
        }
        else if (direction == 'W') {
            swap(face_num["top"], face_num["right"]);
            swap(face_num["left"], face_num["right"]);
            swap(face_num["bottom"], face_num["right"]);
        }
        else
            cout << "plz input direction" << '\n';
    }

    void rotate() {
        int front_num = face_num["front"];
        face_num["front"] = face_num["left"];
        face_num["left"] = face_num["back"];
        face_num["back"] = face_num["right"];
        face_num["right"] = front_num;
    }

    dice new_rolled_dice(const char &direction) {
        dice d = *this;
        d.roll(direction);
        return d;
    }
    dice new_fliped_dice() {
        dice d = *this;
        d.roll('W');
        d.roll('W');
        return d;
    }
    
    int position_num(const string &position) {
        return face_num[position];
    }

    void show() {
        cout << face_num["top"] << face_num["front"] << face_num["right"] << face_num["left"] << face_num["back"] << face_num["bottom"] << '\n';
    }
};

int main()
{
    map<string, int> num;
    cin >> num["top"] >> num["front"] >> num["right"] >> num["left"] >> num["back"] >> num["bottom"];
    int q;
    cin >> q;

    // for (auto x : num) {
    //     cout << x.first << " " << x.second << '\n';
    // }
    
    dice d = dice(num);

    vector<dice> dices(6);
    string dir = "ENSW";
    for(int i = 0; i < dices.size(); i++) {
        if (i == 0)
            dices[0] = d;
        else if (i == 5)
            dices[5] = d.new_fliped_dice();
        else
            dices[i] = d.new_rolled_dice(dir[i - 1]);
            // cout << dir[i - 1] << '\n';

    }
    int t, f;

    for(int x = 0; x < q; x++) {
        cin >> t >> f;
        for(int i = 0; i < dices.size(); i++) {
            for(int j = 0; j < 4; j++) {
                if (dices[i].position_num("top") == t && dices[i].position_num("front") == f) {
                    cout << dices[i].position_num("right") << '\n';
                    break;
                }
                    dices[i].rotate();
            }
        }
    }

    return 0;
}
