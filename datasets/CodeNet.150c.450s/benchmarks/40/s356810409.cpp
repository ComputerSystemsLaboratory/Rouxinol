#include <iostream>
using namespace std;

typedef class dice {
private:

public:
    int mae;
    int ushiro;
    int migi;
    int hidari;
    int ue;
    int shita;

    dice(int qian, int hou, int zuo, int you, int shang, int xia): mae(qian), ushiro(hou), hidari(zuo), migi(you), ue(shang), shita(xia) {}

    void toEast() {
        int tmp = this->ue;
        this->ue = this->hidari;
        this->hidari = this->shita;
        this->shita = this->migi;
        this->migi = tmp;
    }

    void toWest() {
        int tmp = this->ue;
        this->ue = this->migi;
        this->migi = this->shita;
        this->shita = this->hidari;
        this->hidari = tmp;
    }

    void toNorth() {
        int tmp = this->ushiro;
        this->ushiro = this->ue;
        this->ue = this->mae;
        this->mae = this->shita;
        this->shita = tmp;
    }

    void toSouth() {
        int tmp = this->ushiro;
        this->ushiro = this->shita;
        this->shita = this->mae;
        this->mae = this->ue;
        this->ue = tmp;
    }
}* diceptr;

int main() {
//    freopen("in.txt", "r", stdin);

    int a,b,c,d,e,f;
    string action;

    cin >> a >> b >> c >> d >> e >> f;
    cin >> action;

    diceptr dice1 = new dice(b, e, d, c, a, f);
    for (int i = 0; i < action.length(); ++i) {
        char tmp = action[i];
        switch(tmp) {
            case 'E':
                dice1->toEast();
                break;
            case 'W':
                dice1->toWest();
                break;
            case 'N':
                dice1->toNorth();
                break;
            case 'S':
                dice1->toSouth();
                break;
            default:
                break;
        }
    }

    cout << dice1->ue << endl;
}