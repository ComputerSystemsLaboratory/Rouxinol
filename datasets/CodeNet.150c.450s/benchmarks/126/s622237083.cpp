
#include <iostream>
#include <vector>
#include <algorithm>

class Point{
public:
    int i;
    int j;
    
    // constructor
    Point(int i,int j) : i(i),j(j) {}
};

class Roads{
    int a;
    int b;
    std::vector<Point> stop;    // intersections that are closed for construction work
    
public:
    // constructor
    Roads(int a,int b) : a(a),b(b) {}
    void setStop(Point p){
        if ( p.i > 0 && p.i < a+1 && p.j > 0 && p.j < b+1 ) {
            stop.push_back(p);
        }
    }
    /* @param (si,sj) - the start point
     * @return - number of choice
     */
    int choice(const int si,const int sj);
};

int Roads::choice(const int si,const int sj){
    // in case (si,sj) is closed.
    auto isStoped = std::find_if(stop.begin(),stop.end(),
                                 [&](Point p){
                                     if (p.i == si && p.j == sj) {
                                         return true;
                                     }else{
                                         return false;
                                     }
                                 }
                                 );
    if (isStoped != stop.end()) {
        return 0;
    }
    
    // in case (si,sj) is not closed.
    if ( si > a-1 ){
        if( sj > b-1) {
            return 1;
        }else{
            return choice(si,sj+1);
        }
    }else{
        if ( sj > b-1 ) {
            return choice(si+1,sj);
        }else{
            return choice(si+1,sj) + choice(si,sj+1);
        }
    }
}

int main(){
    while (true) {
        int a,b;
        std::cin >> a >> b;
        if (a==0 && b==0) {
            return 0;
        }
        
        Roads r(a,b);
        int n;  // number of colsed intersection.
        std::cin >> n;
        // register closed intersections.
        for (int i=0; i < n; ++i) {
            int xi,yi;
            std::cin >> xi >> yi;
            Point p(xi,yi);
            r.setStop(p);
        }
        
        // output.
        std::cout << r.choice(1,1) << std::endl;
    }
    
    return 0;
}