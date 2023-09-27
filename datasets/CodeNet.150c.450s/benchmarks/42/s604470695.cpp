#include <iostream>
#include <memory>

template<typename T>
class queue {
public:
    explicit
    queue(int size) : size_(size), head_(0), tail_(0), data_(std::make_unique<T[]>(size)) {}

    void enqueue(T x) {
        data_[tail_] = x;
        tail_ = (tail_ + 1) % size_;
    }

    T dequeue() {
        auto x = data_[head_];
        head_ = (head_ + 1) % size_;
        return x;
    }

    bool is_empty() {
        return head_ == tail_;
    }

    bool is_full() {
        return tail_ == size_;
    }

private:
    int size_;
    int head_;
    int tail_;
    std::unique_ptr<T[]> data_;
};

struct proc {
    proc() : name_(""), value_(0) {}

    std::string name_;
    int value_;
};

int main() {
    int n, q;
    std::cin >> n >> q;
    queue<proc> proc_q(n + 1);
    for (int i = 0; i < n; ++i) {
        proc p;
        std::cin >> p.name_ >> p.value_;
        proc_q.enqueue(p);
    }

    int elapsed_time = 0;
    while (true) {
        auto p = proc_q.dequeue();
        if (p.value_ > 0) {
            elapsed_time += std::min(p.value_, q);
            p.value_ = std::max(p.value_ - q, 0);
            if (p.value_ == 0) {
                std::cout << p.name_ << " " << elapsed_time << std::endl;
            }
            else {
                proc_q.enqueue(p);
            }
        }

        if (proc_q.is_empty()) {
            break;
        }
    }

    return 0;
}
