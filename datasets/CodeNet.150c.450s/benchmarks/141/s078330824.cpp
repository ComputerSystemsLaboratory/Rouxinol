#include <iostream>
#include <iomanip>
#include <cmath>

// Vector 2D
template<class T>
struct Vec2D
{
    T x,y;
    explicit Vec2D(T x_=T(), T y_=T()):x(x_),y(y_){}
    Vec2D(const std::pair<T,T>& p):x(p.first),y(p.second){}
    Vec2D& operator+=(const Vec2D& v){ return *this = *this+v; }
    Vec2D& operator-=(const Vec2D& v){ return *this = *this-v; }
    friend Vec2D operator+(const Vec2D& l, const Vec2D& r){ return Vec2D(l.x+r.x,l.y+r.y); }
    friend Vec2D operator-(const Vec2D& l, const Vec2D& r){ return Vec2D(l.x-r.x,l.y-r.y); }
    friend T norm(const Vec2D& v){ return std::hypot(v.x,v.y); }
    friend T norm2(const Vec2D& v){ return v.x*v.x+v.y*v.y; }
    friend T dot(const Vec2D& l, const Vec2D& r){ return l.x*r.x+l.y*r.y; }
    friend T cross(const Vec2D& l, const Vec2D& r){ return l.x*r.y-l.y*r.x; }
    friend int dir(const Vec2D& l, const Vec2D& r)
    {
        // assert(norm2(l)!=0);
        const auto c = cross(l,r);
        if(c>0) return 1;
        if(c<0) return -1;
        if(dot(l,r)<0) return -2;
        if(norm2(l)<norm2(r)) return 2;
        return 0;
    }
};

// Triangle 2D
template<class T=double>
class Triangle2D
{
    Vec2D<T> a,b,c;
public:
    explicit Triangle2D(T ax=T(), T ay=T(), T bx=T(), T by=T(), T cx=T(), T cy=T()):a(ax,ay),b(bx,by),c(cx,cy){}
    Triangle2D(const Vec2D<T>& a_, const Vec2D<T>& b_, const Vec2D<T>& c_):a(a_),b(b_),c(c_){}
    T area() const
    {
        return std::abs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2;
    }
    T dist_a() const { return norm(b-c); }
    T dist_b() const { return norm(c-a); }
    T dist_c() const { return norm(a-b); }
    Vec2D<T> circumcenter() const
    {
        const Vec2D<T> vb(2*(b.x-a.x),2*(c.x-a.x)),
                       vc(2*(b.y-a.y),2*(c.y-a.y)),
                       vd(norm2(a)-norm2(b),norm2(a)-norm2(c));
        return Vec2D<T>(cross(vc,vd)/cross(vb,vc),
                        cross(vd,vb)/cross(vb,vc));
    }
    T R() const { return dist_a()*dist_b()*dist_c()/(4*area()); }
    bool inside(const Vec2D<T>& p, bool line=true) const
    {
        const auto c1 = cross(b-a,p-a);
        const auto c2 = cross(c-b,p-b);
        const auto c3 = cross(a-c,p-c);
        if(line) return (c1>=0&&c2>=0&&c3>=0)||(c1<=0&&c2<=0&&c3<=0);
        else     return (c1> 0&&c2> 0&&c3> 0)||(c1< 0&&c2< 0&&c3< 0);
    }
};

int main()
{
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(3);
    typedef double F;
    for( F x1,y1,x2,y2,x3,y3,px,py;
         std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> px >> py; )
    {
        const Triangle2D<F> tri(x1,y1,x2,y2,x3,y3);
        std::cout << (tri.inside(Vec2D<F>(px,py))?"YES":"NO") << std::endl;
    }
}