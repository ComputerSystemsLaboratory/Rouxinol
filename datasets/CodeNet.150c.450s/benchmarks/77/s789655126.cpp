#include<iostream>
#include<vector>
#include<algorithm> 
#include<iterator> 
#define sizeVector 20

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void inputPlace(vector<vector<int> > &map, int N);
void update(vector<vector<int> > &map, char dire, int dist, int &x, int &y); 
void movement(vector<vector<int> > &map); 
int check(vector<vector<int> > &map); 

int main() {
    int N;
    cin >> N; 
    while (N != 0) {
    vector<vector<int> > map(sizeVector+1, vector<int>(sizeVector+1, 0));
    inputPlace(map, N);
    movement(map);
    if (check(map) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
     cin >> N; 
    }
    return 0;
}

void inputPlace(vector<vector<int> > &map, int N) {
    int x;
    int y;
    for (int times = 0; times < N; times ++) {
        cin >> x >> y; 
        map[x][y] = 1;
    }
}

void update(vector<vector<int> > &map, char dire, int dist, int &x, int &y) {
    if (dire == 'E') {
        for (int i = 0; i < dist; i ++) {
            map[x + i + 1][y] = 0;
        }
        x += dist;
    } else if (dire == 'W') {
        for (int i = 0; i < dist; i ++) {
            map[x - i - 1][y] = 0;
        }
        x -= dist;
    } else if (dire == 'N') {
        for (int i = 0; i < dist; i ++) {
            map[x][y + i + 1] = 0;
        }
        y += dist;
    } else if (dire == 'S') {
        for (int i = 0; i < dist; i ++) {
            map[x][y - i - 1] = 0;
        }
        y -= dist;
    } else {
        cout << "error" << endl;
    }

}

void movement(vector<vector<int> > &map) {
    int M;
    cin >> M; 
    int x = 10;
    int y = 10;
    char dire; // direction
    int dist; // distance
    for (int times = 0; times < M; times ++) {
        cin >> dire >> dist;
        update(map, dire, dist, x, y);
    }
}

int check(vector<vector<int> > &map) {
    for (int i = map.size() - 1; i >= 0; i --) {
        for (int j = 0; j < map[i].size(); j ++) {
            if (map[i][j] != 0) {
                return 1;
            }
        }
    }
    return 0;
}