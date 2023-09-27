#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

struct xy {
    double x;
    double y;
};

// solve:
// ax + by = c
// dx + ey = f
// a != 0
xy solve(double a, double b, double c, double d, double e, double f){
    xy result;
    // get y
    if (d == 0){
        result.y = f / e; // e!=0 to have an answer
    } else {
        // dx + (d/a)by = (d/a)c, dx + ey = f
        // (d/a-e)y = (d/a)c - f
        result.y = ((d/a)*c-f)/((d/a)*b-e);
    }
    result.x = (c-b*result.y) / a;
    return result;
}

int main(){
    //ifstream cin("input.txt");
    string line;
    while(getline(cin,line)){
        stringstream ss_line(line);        
        // input equation data
        double a,b,c,d,e,f;
        ss_line >> a >> b >> c >> d >> e >> f;
        // solve the equation
        xy result;
        if (a != 0)
            result = solve(a,b,c,d,e,f);
        else    // d != 0 since the equation has an answer 
            result = solve(d,e,f,a,b,c);
        cout << fixed << setprecision(3) << result.x << " " << result.y << endl;
    }

    return 0;
}