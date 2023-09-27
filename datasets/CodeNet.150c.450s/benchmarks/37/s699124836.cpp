#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

double calc_y(double a, double b, double c, double d, double e, double f) {
    double y = (((d * c) / a) - f ) / (((d * b) / a) - e );
    return y;
}

int main() {
    string str;
    while(getline(cin, str)) {
        vector<string> splited = split(str, ' ');
        double a = stod(splited[0].c_str());
        double b = stod(splited[1].c_str());
        double c = stod(splited[2].c_str());
        double d = stod(splited[3].c_str());
        double e = stod(splited[4].c_str());
        double f = stod(splited[5].c_str());
        double y = calc_y(a, b, c, d, e, f);
        double x = (c - (b * y)) / a;
        cout <<  fixed << setprecision(3) << x << " " << fixed << setprecision(3)  << y << endl;
    }

    return 0;
}