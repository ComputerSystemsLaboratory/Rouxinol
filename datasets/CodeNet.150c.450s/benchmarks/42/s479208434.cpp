#include <iostream>
#include <string>
#include <queue>

using std::string;

class Proc {
private:
    const string m_name;
    int m_time;

public:
    Proc(string name, int time)
        : m_name(name), m_time(time) {}

    string name() const { return m_name; }

    int time() const { return m_time; }

    Proc& operator-=(int time)
    {
        m_time -= time;
        return *this;
    }

    bool operator<=(int time)
    {
        return ((m_time <= time)? true: false);
    }
};

int main()
{
    int procs_num, quan;
    std::cin >> procs_num >> quan;

    std::queue<Proc> procs;
    for (auto i = 0; i < procs_num; i++) {
        string name;
        int time;
        std::cin >> name >> time;
        Proc in(name, time);
        procs.push(in);
    }

    int time_sum = 0;
    while (procs.size() > 0) {
        if (procs.front() <= quan) {
            time_sum += procs.front().time();
            std::cout << procs.front().name() << " "
                      << time_sum << std::endl;
            procs.pop();
        } else {
            time_sum += quan;
            procs.front() -= quan;
            procs.push(procs.front());
            procs.pop();
        }
    }

    return 0;
}