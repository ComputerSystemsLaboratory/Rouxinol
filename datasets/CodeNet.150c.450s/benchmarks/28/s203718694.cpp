#include<iostream>
using namespace std;

class Baggage{
    int* w;
    int  n;
    int top;
public:
    Baggage(int* w_in, int n_in){
        w = w_in;
        n = n_in;
        top = 0;
    }
    bool is_empty(){
        return top == n;
    }
    int front(){
        return w[top];
    }
    void pop(){
        top++;
    }
    void reset(){
        top = 0;
    }
};

class Truck{
    int initial_number;
    int remain_number;
    int p;
    int remain_p;
public:
    Truck(int number){
        initial_number = number;
        remain_number  = number - 1;
    }
    bool exist_next_truck(){
        return remain_number != 0;
    }
    void next_truck(){
        remain_p = p;
        remain_number--;
    }
    bool can_ride(int weight){
        if (remain_p >= weight) {
            return true;
        }
        return false;
    }
    void ride(int weight){
        remain_p -= weight;
    }
    void reset(){
        remain_p = p;
        remain_number = initial_number - 1;
    }

    bool can_ride_all(Baggage baggage, int p_in) {
        p = p_in;
        reset();
        while (!baggage.is_empty()) {
            if (can_ride(baggage.front())) {
                ride(baggage.front());
                baggage.pop();
                continue;
            }
            if (exist_next_truck()) {
                next_truck();
                continue;
            }
            return false;
        }
        return true;
    }

    int search_p(Baggage b, int min_p, int max_p) {
        int mid_p = (min_p + max_p) / 2;
        if (!can_ride_all(b, mid_p)) {
            return search_p(b, mid_p + 1, max_p);
        }
        if (can_ride_all(b, mid_p - 1)) {
            return search_p(b, min_p, mid_p - 1);
        }
        return mid_p;
    }
};


int main(){
    int n, k;
    cin >> n >> k;
    int w[n];
    int max_w = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        if (w[i] > max_w) max_w = w[i];
        sum += w[i];
    }
    Baggage baggage(w, n);
    Truck truck(k);
    cout << truck.search_p(baggage, max_w, sum) << endl;;

    return 0;
}