#include <cstdio>
#include <iostream>
#include <list>

int current_time = 0;

class Task {
public:
    Task() {}
    std::string name;
    int time_remaining;
};

#ifdef DEBUG
void show_data(std::list<Task>& data)
{
    for(auto iter = data.begin(); iter != data.end(); iter++) {
        printf("%s : %d\n", iter->name.c_str(), iter->time_remaining);
    }
    puts("");
}
#endif

void show_result(Task& task)
{
    printf("%s %d\n", task.name.c_str(), current_time);
}

void solve(std::list<Task>& data, int time_limit)
{
    Task current_task;
    while(!data.empty()) {
        current_task.name = data.front().name;
        current_task.time_remaining = data.front().time_remaining;
        data.pop_front();

        if(current_task.time_remaining <= time_limit) {
            current_time += current_task.time_remaining;
            show_result(current_task);
        } else {
            current_time += time_limit;
            current_task.time_remaining -= time_limit;
            data.push_back(current_task); // XXX: may disappear
        }
    }
}

int main()
{
    int input_size, time_limit;
    std::cin >> input_size >> time_limit;
    std::list<Task> data(input_size);
    for(auto iter = data.begin(); iter != data.end(); iter++) {
        std::cin >> iter->name >> iter->time_remaining;
    }
#ifdef DEBUG
    show_data(data);
#endif

    solve(data, time_limit);
    return 0;
}