#include <bits/stdc++.h>

struct Rectangle {
    int h;
    int w;
    int d;

    Rectangle() : Rectangle(0,0) {}
    Rectangle(int h, int w) 
        : h(h), w(w), d(0) {
            calculate_distance();
        }
    Rectangle(Rectangle const &other) {
        this->h = other.h;
        this->w = other.w;
        this->d = other.d;
    }

    Rectangle &operator=(Rectangle const &rhs) {
        this->h = rhs.h;
        this->w = rhs.w;
        this->d = rhs.d;
        return *this;
    }

    void calculate_distance() {
        this->d = h*h + w*w;
    }
    bool is_larger_than(Rectangle &other) {
        this->calculate_distance();
        other.calculate_distance();
        if (this->d == other.d) {
            return this->h > other.h;
        }
        return this->d > other.d;
    }
};

int main(void)
{
    int h, w;
    while (std::cin >> h >> w, h) {
        Rectangle base(h,w);

        Rectangle curr;
        Rectangle min(h+2, w+2);

        int mh = std::max(base.h, base.w);
        for (curr.h = 1; curr.h <= mh; curr.h++) {
            int mw = sqrt(base.d - curr.h*curr.h) + 1;
            for (curr.w = curr.h+1; curr.w <= mw; curr.w++) {
                if (curr.is_larger_than(base) && min.is_larger_than(curr)) {
                    min = curr;
                    break;
                }
            }
        }

        std::cout << min.h << " " << min.w << std::endl;
    }
    return 0;
}