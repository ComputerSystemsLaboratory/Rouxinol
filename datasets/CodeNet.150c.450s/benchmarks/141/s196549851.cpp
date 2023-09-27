#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

const int EPS=1e-9;

namespace FP {
    bool isZero(double x) {
        return (abs(x) <= EPS);
    }
};

struct Point {
    double x, y;
    Point(double x=0, double y=0) : x(x), y(y) {}
    string to_s() {
        ostringstream os;
        os << "(" << x << "," << y << ")";
        return os.str();
    }
    bool operator<(const Point &o) const {
        return x == o.x ? y < o.y : x < o.x;
    }
    Point operator+(const Point &o) const {
        return Point(x+o.x, y+o.y);
    }
    Point operator-(const Point &o) const {
        return Point(x-o.x, y-o.y);
    }
    Point operator*(const double m) const {
        return Point(x*m, y*m);
    }
    Point operator/(const double d) const {
        return Point(x/d, y/d);
    }
    // 外積
    double cross(const Point &o) const {
        return x * o.y - y * o.x;
    }
    // 内積
    double dot(const Point &o) const {
        return x * o.x + y * o.y;
    }
    // ベクトルがx軸となす角
    double atan() const {
        return atan2(y, x);
    }
    // ベクトルの長さの二乗
    double norm() const {
        return dot(*this);
    }
};

struct Line {
    double a, b, c;
    Line(double a=0, double b=0, double c=0) :
        a(a), b(b), c(c) {}
    Point intersectionPoint(const Line &l) const {
        double d = a * l.b - l.a * b;
        if (!intersects(l)) {
            throw string("The 2 Lines are parallel");
        }
        double x = (b * l.c - l.b * c) / d;
        double y = (l.a * c - a * l.c) / d;
        return Point(x, y);
    }
    bool intersects(const Line &l) const {
        return !FP::isZero(a * l.b - l.a * b);
    }
    string to_s() {
        ostringstream os;
        os << a << ' ' << b << ' ' << c;
        return os.str();
    }
    static Line fromPoints(const Point &a, const Point &b) {
        double dx = b.x - a.x;
        double dy = b.y - a.y;
        return Line(dy, -dx, dx * a.y - dy * a.x);
    }
    static Line fromPoints(double x1, double y1, double x2, double y2) {
        return fromPoints(Point(x1, y1), Point(x2, y2));
    }
};

struct LineSegment {
    Point start, end;
    LineSegment(const Point &start, const Point &end) : start(start), end(end) {}
    LineSegment(double x1, double y1, double x2, double y2) : start(Point(x1, y1)), end(Point(x2, y2)) {}
    string to_s() {
        ostringstream os;
        os << '(' << start.x << ',' << start.y << ')' << '-' << '(' << end.x << ',' << end.y << ')' << endl;
        return os.str();
    }
    Line toLine() const {
        return Line::fromPoints(start, end);
    }
    bool intersects(const Line &l) const {
        double t1 = l.a * start.x + l.b * start.y + l.c;
        double t2 = l.a * end.x + l.b * end.y + l.c;
        return t1 * t2 <= 0;
    }
    bool intersects(const LineSegment &s) const {
        return intersects(s.toLine()) && s.intersects(toLine());
    }
    Line perpendicularBisector() const {
        Point p1 = (start + end) / 2;
        Point p2;
        p2.x = -(end - p1).y;
        p2.y = (end - p1).x;
        p2 = p2 + p1;
        return Line::fromPoints(p1, p2);
    }
};

int main() {
    Point v[3], p;
    while (cin >> v[0].x >> v[0].y) {
        for (int i = 1; i < 3; i++) cin >> v[i].x >> v[i].y;
        cin >> p.x >> p.y;
        Point g = (v[0] + v[1] + v[2]) / 3;
        vector<LineSegment> e;
        e.push_back(LineSegment(v[0], v[1]));
        e.push_back(LineSegment(v[1], v[2]));
        e.push_back(LineSegment(v[2], v[0]));

        bool inner_triangle = true;
        for (int i = 0; i < 3; i++) {
            if (LineSegment(g, p).intersects(e[i])) {
                inner_triangle = false;
            }
        }

        if (inner_triangle) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}