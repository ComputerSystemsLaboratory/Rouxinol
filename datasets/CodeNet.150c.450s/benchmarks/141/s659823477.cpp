#include <cstdio>
#include <cmath>
#include <utility>

typedef std::pair<float, float> point;
typedef std::pair<float, float> vec;

inline float cross_product(const vec& v1, const vec& v2) {
    return v1.first * v2.second - v1.second * v2.first;
}

inline vec vec_sub(const vec& v1, const vec& v2) {
    return std::make_pair(v1.first - v2.first, v1.second - v2.second);
}

int main() {    
    point p1, p2, p3, p4;
    while (scanf("%f %f %f %f %f %f %f %f",
                 &p1.first, &p1.second,
                 &p2.first, &p2.second,
                 &p3.first, &p3.second,
                 &p4.first, &p4.second) != EOF) {
        vec v12 = vec_sub(p1, p2);
        vec v24 = vec_sub(p2, p4);
        float cp1 = cross_product(v12, v24);
        
        vec v23 = vec_sub(p2, p3);
        vec v34 = vec_sub(p3, p4);
        float cp2 = cross_product(v23, v34);
        
        vec v31 = vec_sub(p3, p1);
        vec v14 = vec_sub(p1, p4);
        float cp3 = cross_product(v31, v14);
        
        int r = std::signbit(cp1);
        r += std::signbit(cp2);
        r += std::signbit(cp3);
        
        printf(r == 0 || r == 3 ? "YES\n" : "NO\n");
    }
}