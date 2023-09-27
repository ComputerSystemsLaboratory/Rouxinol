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

    void rotateToRight() {
        int tmp = this->mae;
        this->mae = this->hidari;
        this->hidari = this->ushiro;
        this->ushiro = this->migi;
        this->migi = tmp;
    }

    int getRightSideOnFrtAndTop(int top, int frt) {
        while (this->mae != frt || this->ue != top) {
            for (int i = 0; i < 4; ++i) {
                if (this->mae != frt) {
                    this->rotateToRight();
                }
            }
            for (int i = 0; i < 4; ++i) {
                if (this->ue != top) {
                    this->toWest();
                }
            }
        }

        return this->migi;
    }
}* diceptr;

int main() {
//    freopen("in.txt", "r", stdin);

    int a,b,c,d,e,f;
    int n, frt, bak;

    cin >> a >> b >> c >> d >> e >> f;
    diceptr dice2 = new dice(b, e, d, c, a, f);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> frt >> bak;
        cout << dice2->getRightSideOnFrtAndTop(frt, bak) << endl;
    }
}