#include <iostream>
#include <sstream>
using namespace std;

class Dice {
public:
    static int rollingface[][4];
    int face[6];
    Dice(string &face_data);
    // ~Dice();
    void roll(const char &op);
    int top();
    void print_faces();
};

int Dice::rollingface[][4] = {
    {0, 2, 5, 3},
    {0, 4, 5, 1},
    {0, 1, 5, 4},
    {0, 3, 5, 2},
};

Dice::Dice(string &face_data) {
    istringstream bstrm;
    bstrm.str(face_data);
    for (int i = 0; i < 6; i++) {
        bstrm >> face[i];
    }
}

void Dice::roll(const char &op) {
    int *fseq;
    switch (op) {
        case 'E': fseq = Dice::rollingface[0]; break;
        case 'N': fseq = Dice::rollingface[1]; break;
        case 'S': fseq = Dice::rollingface[2]; break;
        case 'W': fseq = Dice::rollingface[3]; break;
        default: break;
    }
    int t, p = face[fseq[3]];
    for (int i = 0; i < 4; i++) {
        t = face[fseq[i]];
        face[fseq[i]] = p;
        p = t;
    }
}

void Dice::print_faces() {
    cout << "face:" << endl;
    cout << "   " << face[4] << endl;
    cout << face[3] << " " << face[0] << " " << face[2] << endl;
    cout << "   " << face[1] << endl;
    cout << "   " << face[5] << endl;
    cout << endl;
}

int Dice::top() {
    return face[0];
}

int main() {
    string buf, op_seq;
    int i;
    Dice *dice;

    getline(cin, buf);
    dice = new Dice(buf);
    getline(cin, op_seq);
    for (i = 0; i < op_seq.size(); i++) {
        dice->roll(op_seq[i]);
        // dice->print_faces();
    }
    cout << dice->top() << endl;

    return 0;
}