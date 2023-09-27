#include <string>
#include <iostream>
#include <sstream>

class schedule_element {
public:
    schedule_element()
        : _name(), _time()
    {}

    schedule_element(const std::string& name, std::size_t time)
        : _name(name), _time(time)
    {
    }

    std::size_t process(std::size_t q)
    {
        if (q >= _time) {
            const std::size_t time = _time;
            _time = 0;
            return time;
        }

        _time -= q;
        return q;
    }

    const std::string& name() const 
    {
        return _name;
    }

    bool is_finish() const
    {
        return _time == 0;
    }

private:
    std::string _name;
    std::size_t _time;
};

class round_robin_schedule {
public:
    round_robin_schedule(int n)
        : _schedules(new schedule_element[n]),
        _n(n),
        _head(0),
        _tail(0)
    {}

    ~round_robin_schedule()
    {
        delete[] _schedules;
    }

    void enqueue(const schedule_element& schedule)
    {
        _schedules[_tail] = schedule;
        increment(_tail, _n);
    }

    void enqueue(const std::string& name, std::size_t time)
    {
        this->enqueue(schedule_element(name, time));
    }

    schedule_element dequeue()
    {
        schedule_element tmp = _schedules[_head];
        increment(_head, _n);
        return tmp;
    }

    bool is_empty() const
    {
        return _head == _tail;
    }
    
private:
    static void increment(int& idx, const int n)
    {
        ++idx;
        if (idx == n) {
            idx = 0;
        }
    }

private:
    schedule_element* _schedules;
    int _n;
    int _head;
    int _tail;
};

void process(
    round_robin_schedule& schedules,
    std::size_t q,
    std::size_t sum)
{
    if (schedules.is_empty()) {
        return;
    }

    auto schedule = schedules.dequeue();
    sum += schedule.process(q);
    if (schedule.is_finish()) {
        std::cout << schedule.name() << " " << sum << std::endl;
    }
    else {
        schedules.enqueue(schedule);
    }

    process(schedules, q, sum);
    return;
}

void process(
    round_robin_schedule& schedules,
    std::size_t q)
{
    process(schedules, q, 0);
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string buf;

    getline(std::cin, buf);
    const int n
        = std::stoi(buf.substr(0, buf.find(' ')));
    const std::size_t q
        = std::stoi(buf.substr(buf.find(' ') + 1, buf.size()));

    round_robin_schedule schedules(n + 1);
    for (int i = 0; i < n; ++i) {
        getline(std::cin, buf);
        schedules.enqueue(
            buf.substr(0, buf.find(' ')),
            std::stoi(buf.substr(buf.find(' ') + 1, buf.size())));
    }
    process(schedules, q);

    return 0;
}