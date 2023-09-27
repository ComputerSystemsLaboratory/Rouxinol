#include<iostream>
#include<vector>
using namespace std;

struct land{
    char form;
    int  height;
};
vector<land> map;
vector<int> tamari;

int calc_slash_index(int back_index)
{
    for (int i = back_index + 1; i < map.size(); i++) {
        if (map[i].form == '/' && map[i].height == map[back_index].height) {
            return i;
        }
    }
    return -1;
}

int calc(int back_index, int slash_index)
{
    int ret = slash_index - back_index;
    for (int i = back_index + 1; i < slash_index; i++) {
        if (map[i].form == '\\') {
            int s = calc_slash_index(i);
            ret += s - i;
        }
    }
    return ret;
}

int main()
{
    char c;
    land land_in;
    cin >> land_in.form;
    land_in.height = 0;
    map.push_back(land_in);
    while (cin >> land_in.form) {
        int height_param1;
        int height_param2;
        if (map.back().form == '/') {
            height_param1 = 0;
        } else {
            height_param1 = -1;
        }
        if (land_in.form == '\\') {
            height_param2 = 0;
        } else {
            height_param2 = 1;
        }
        land_in.height = map.back().height + height_param1 + height_param2;
        map.push_back(land_in);
    }

    int total = 0;
    for (int i = 0; i < map.size(); i++) {
        if (map[i].form == '\\') {
            int slash = calc_slash_index(i);
            if (slash == -1) continue;
            int rain = calc(i, slash);
            tamari.push_back(rain);
            total += rain;
            i = slash;
        }
    }
    cout << total << endl;
    cout << tamari.size();
    for (int i = 0; i < tamari.size(); i++) {
        cout << " " << tamari[i];
    }
    cout << endl;
    return 0;
}