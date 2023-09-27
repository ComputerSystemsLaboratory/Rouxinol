#include <iostream>
#include <queue>
#include <string>
#include <utility>

int main(int argc, char const *argv[])
{
    std::queue<std::pair<std::string, int> > q;
    int n;
    std::cin >> n;
    int quantum;
    std::cin >> quantum;

    std::string name;
    int time;
    for (int i = 0; i < n; i++) {
        std::cin >> name;
        std::cin >> time;
        q.push(std::pair<std::string, int>(name, time));
    }

    int total = 0;
    std::pair<std::string, int> process;
    while (!q.empty()) {
        process = q.front();
        q.pop();

        if (process.second <= quantum) {
            total += process.second;
            std::cout << process.first << " " << total << std::endl;
        } else {
            total += quantum;
            q.push(std::pair<std::string, int>(process.first, (process.second - quantum)));
        }
    }

    return 0;
}