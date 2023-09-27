#include <cstdio>
#include <string>
#include <memory>
#include <list>
#include <algorithm>

struct Data {

    Data(int n) :
        value{ n },
        nextData{},
        prevData{} {
    }

    int value;
    std::unique_ptr<Data> nextData;
    Data* prevData;

};

class Deque {

public:
    Deque() :
        baseData{ new Data(0) }
    {
        baseData->nextData = std::unique_ptr<Data>(baseData);
        baseData->prevData = baseData;
    }

    ~Deque() {
        baseData->nextData.reset();
    }

    void print() {
        auto data = baseData->nextData.get();
        std::printf("%d", data->value);
        for (data = data->nextData.get(); data != baseData; data = data->nextData.get()) {
            std::printf(" %d", data->value);
        }
        std::puts("");
    }

    void insert(int n) {
        std::unique_ptr<Data> newData{ new Data{ n } };
        newData->prevData = baseData;
        newData->nextData = std::move(baseData->nextData);
        newData->nextData->prevData = newData.get();
        baseData->nextData = std::move(newData);
    }

    void deleteOne(int n) {
        for (auto data = baseData->nextData.get(); data != baseData; data = data->nextData.get()) {
            if (data->value != n) { continue; }

            auto && nextData = data->nextData;
            nextData->prevData = data->prevData;
            data->prevData->nextData = std::move(nextData);
            return;
        }

    }

    void deleteFirst() {
        auto && newBeginData = baseData->nextData->nextData;
        newBeginData->prevData = baseData;
        baseData->nextData = std::move(newBeginData);
    }

    void deleteLast() {
        auto newPrevData = baseData->prevData->prevData;
        auto && newNextData = baseData->prevData->nextData;
        baseData->prevData = newPrevData;
        newPrevData->nextData = std::move(newNextData);
    }

private:
    Data* baseData;

};

int main () {

    const int BUF_SIZE = 24;

    int commandCount;
    std::scanf("%d\n", &commandCount);

    Deque deque;
    while (commandCount--) {
        char command[BUF_SIZE];
        std::fgets(command, sizeof(command), stdin);
        std::string command_str(command);

        if (command_str.substr(0, 6) == "insert") {
            auto number = command_str.substr(7);
            number.pop_back();
            int value = std::stoi(number);
            deque.insert(value);
        } else if (command_str.substr(0, 11) == "deleteFirst") {
            deque.deleteFirst();
        } else if (command_str.substr(0, 10) == "deleteLast") {
            deque.deleteLast();
        } else if (command_str.substr(0, 6) == "delete") {
            auto number = command_str.substr(7);
            number.pop_back();
            int value = std::stoi(number);
            deque.deleteOne(value);
        }
    }

    deque.print();

    return 0;

}