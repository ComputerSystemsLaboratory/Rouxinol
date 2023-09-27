#include <iostream>
#include <vector>
#include <functional>

using namespace std;

namespace util {
    template<typename T >
    vector<T> read_vector(function<T(string)> parse_func) {
        int n;
        cin >> n;

        vector<T> v;
        for (int i = 0; i < n; i++) {
            string in;
            cin >> in;
            v.push_back(parse_func(in));
        }
        return v;
    }

    template<typename T >
    void print_vector(vector<T> &v) {
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it;
            if (it + 1 != v.end())
                cout << " ";
        }
        cout << endl;
    }

    template<typename T >
    void swap(vector<T>& v, size_t i, size_t j) {
        T tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }

    template<typename T >
    bool is_stable(vector<T>& src, vector<T>& sorted,
                   function<bool(const T&, const T&)> same_value, function<bool(const T&, const T&)> identical) {
        for (auto it = sorted.begin(); it != sorted.end()-1; it++) {
            T current = *it;
            T next = *(it+1);

            if (same_value(current,next)) {
                size_t current_idx = 0;
                for (size_t i = 0; i < src.size(); i++){
                    if (identical(src[i], current)) {
                        current_idx = i;
                        break;
                    }
                }

                size_t next_idx = 0;
                for (size_t i = 0; i < src.size(); i++){
                    if (identical(src[i], next)) {
                        next_idx = i;
                        break;
                    }
                }
                if (current_idx > next_idx)
                    return false;
            }
        }
        return true;
    }

    void print_stable(bool is_stable) {
       if (is_stable) {
           cout << "Stable";
       } else {
           cout << "Not stable";
       }
        cout << endl;
    }
}

namespace {
    class Card {
    private:
        char suit;
        int value;
    public:
        Card(char _suit, int _value) : suit(_suit), value(_value) {}

        bool same_suit(const Card& c) const { return suit == c.suit; }
        bool same_value(const Card& c) const { return value == c.value; }

        friend ostream& operator<<(ostream& os, const Card& c);
        friend bool operator< (const Card& lhs, const Card& rhs);
        friend bool operator> (const Card& lhs, const Card& rhs);
        friend bool operator<= (const Card& lhs, const Card& rhs);
        friend bool operator>= (const Card& lhs, const Card& rhs);
    };
    ostream& operator<<(ostream& os, const Card& c) {
        os << c.suit << c.value;
        return os;
    }
    inline bool operator< (const Card& lhs, const Card& rhs) { return lhs.value < rhs.value; }
    inline bool operator> (const Card& lhs, const Card& rhs) { return rhs < lhs; }
    inline bool operator<= (const Card& lhs, const Card& rhs) { return !(lhs > rhs); }
    inline bool operator>= (const Card& lhs, const Card& rhs) { return !(lhs < rhs); }

    template<typename T>
    int run_bubble_sort(vector<T>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            for (size_t j = v.size() - 1; j > i; j--) {
                if (v[j] < v[j-1]) {
                    count++;
                    util::swap(v,j,j-1);
                }
            }
        }
        return count;
    }

    template<typename T>
    int run_selection_sort(vector<T>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            size_t min = i;
            for (size_t j = i; j < v.size(); j++) {
                if (v[j] < v[min])
                    min = j;
            }

            if (min != i) {
                count++;
                util::swap(v,i,min);
            }
        }
        return count;
    }
}

int main() {
    vector<Card> in = util::read_vector<Card>([](string s){
        return Card(s[0], stoi(s.substr(1)));
    });

    vector<Card> bubble(in);
    vector<Card> selection(in);

    run_bubble_sort(bubble);
    run_selection_sort(selection);

    auto same_value = [](const Card& lhs, const Card& rhs) -> bool { return lhs.same_value(rhs); };
    auto identical = [](const Card& lhs, const Card& rhs) -> bool { return lhs.same_value(rhs) && lhs.same_suit(rhs); };

    util::print_vector(bubble);
    util::print_stable(util::is_stable<Card>(in, bubble, same_value, identical));
    util::print_vector(selection);
    util::print_stable(util::is_stable<Card>(in, selection, same_value, identical));

    return 0;
}