#include <iostream>
#include <vector>
using namespace std;

static const int FLOORS = 3;
static const int BUILDINGS = 4;
static const int ROOMS = 10;

class Building {
public:
    vector< vector<int> > build;
    Building() {
        for(int i=0; i < FLOORS; i++) {
            vector<int> tmp;
            for(int j=0; j < ROOMS; j++) {
                tmp.push_back(0);
            }
            build.push_back(tmp);
        }
    }

    void printMembers() {
        for(int i=0; i < build.size(); i++) {
            for(int j=0; j < build[i].size(); j ++) {
                cout << " " << build[i][j];
            }
            cout << endl;
        }
    }
};

int main(void) {
    int N, b, f, r, v;
    vector<Building> houses;
    for(int i=0; i < BUILDINGS; i++) {
        houses.push_back(Building());
    }

    cin >> N;
    while(N-- > 0) {
        cin >> b >> f >> r >> v;
        houses[b-1].build[f-1][r-1] += v;
    }

    for(int i=0; i<houses.size(); i++) {
        if(i != 0) cout << "####################" << endl;
        houses[i].printMembers();
    }

    return 0;
}