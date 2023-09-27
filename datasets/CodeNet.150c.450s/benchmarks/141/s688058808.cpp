#include<bits/stdc++.h>
#include<complex>
#define eps 1e-9
using namespace std;
typedef complex<double> point;
typedef pair<point, point> line;
//b??????a??????????????????
double dis(point a, point b){
  return abs(a - b);
}

//??????
double dot(point a, point b){
  return a.real()*b.real() + a.imag()*b.imag();
}

//??????
double cross(point a, point b){
  return imag(conj(a) * b);
}

//counter clock wise
int ccw(point a, point b, point c){
  if(cross(b - a, c - a) >  eps)return  1;//??????ab????????´
  if(cross(b - a, c - a) < -eps)return -1;//??????ab????????´
  if(dot(b - a, c - a) < -eps)return 2;//??´???ab??????a???????????????
  if(abs(b - a) + eps < abs(c - a))return -2;//??´???ab??????b???????????????
  return 0;//??´???ab???
}

double line_to_point_dis(line l, point p){
  return abs(cross(p - l.first, l.second - l.first))/
    abs(l.second - l.first);
}

double seg_to_point_dis(line l, point p){
  point a = l.first, b = l.second, c = p;
  if(dot(b - a, c - a) < eps)return abs(c - a);
  if(dot(a - b, c - b) < eps)return abs(c - b);
  return line_to_point_dis(l, p);
}

double seg_to_seg_dis(line a, line b){
  double res = seg_to_point_dis(a, b.first);
  res = min(res, seg_to_point_dis(a, b.second));
  res = min(res, seg_to_point_dis(b, a.first));
  res = min(res, seg_to_point_dis(b, a.second));
  return res;
}

bool is_cross(line a, line b){
  if(ccw(a.first, a.second, b.first) *
     ccw(a.first, a.second, b.second) <= 0 &&
     ccw(b.first, b.second, a.first) *
     ccw(b.first, b.second, a.second) <= 0){
    return true;
  }
  return false;
}

point cross_point(line a, line b){
  double d1 = cross(b.second - b.first,
                    b.first - a.first);
  double d2 = cross(b.second - b.first,
                    a.second - a.first);
  return a.first + (a.second - a.first) * d1/d2;
}

pair<point, point> norm(point p){
  return pair<point, point>(p*point(0, 1),
                            p*point(0, -1));
}

int main(int argc, char *argv[]){
  point x[3], p;
  double real[3], imag[3], r, i;
  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf\n", &real[0], &imag[0],
              &real[1], &imag[1], &real[2], &imag[2], &r, &i) != EOF){
    for (int i = 0; i < 3; i++) {
      x[i] = complex<double>(real[i], imag[i]);
    }
    p = complex<double>(r, i);
    line l[3];
    for (int i = 0; i < 3; i++) {
      l[i].first = x[i];
      l[i].second = x[(i + 1)%3];
    }
    int a[3];
    for (int i = 0; i < 3; i++) {
      a[i] = ccw(x[i], x[(i + 1)%3], p);
    }
    if(a[0] == a[1] && a[1] == a[2] && a[0] == a[2])std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
  return 0;
}