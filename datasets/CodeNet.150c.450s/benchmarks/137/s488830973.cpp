#include <cstdio>
#include <string>
#include <memory>
#include <array>

template<typename T>
class Data;
template<typename T>
using Data_ptr = std::unique_ptr<Data<T>>;

template<typename T>
class Data {

public:
    Data(T value) :
        value{ value },
        nextData{},
        prevData{} {
    }

    void insert(T value) {
        if (this->value == value) { return; }

        if (this->value < value) {
            if (!nextData) {
                nextData.reset(new Data<T>{ value });
                return;
            }
            return nextData->insert(value);
        }

        if (!prevData) {
            prevData.reset(new Data<T>{ value });
            return;
        }
        return prevData->insert(value);
    }

    bool find(T value) const {
        if (this->value == value) {
            return true;
        }
        if (this->value < value) {
            if (nextData) {
                return nextData->find(value);
            }
        } else {
            if (prevData) {
                return prevData->find(value);
            }
        }

        return false;
    }

private:
    T value;
    Data_ptr<T> nextData;
    Data_ptr<T> prevData;

};

class Dictionary {

    static constexpr int SIZE = 4;

public:
    Dictionary() :
        list{
            {
                Data_ptr<std::string>{ new Data<std::string>{ "" } },
                Data_ptr<std::string>{ new Data<std::string>{ "" } },
                Data_ptr<std::string>{ new Data<std::string>{ "" } },
                Data_ptr<std::string>{ new Data<std::string>{ "" } }
            }
        } {
    }

    bool find(std::string word) {
        const auto & findList = getList(word.front());
        return findList->find(word);
    }

    void insert(std::string word) {
        auto & findList = getList(word.front());
        return findList->insert(word);
    }

private:
    int getIndex(char firstWord) {
        switch (firstWord) {
        case 'A':
            return 0;
            break;
        case 'C':
            return 1;
            break;
        case 'G':
            return 2;
            break;
        case 'T':
            return 3;
            break;
        }
    }

    Data_ptr<std::string> & getList(char firstWord) {
        const int id = getIndex(firstWord);
        return list.at(id);
    }

    std::array<Data_ptr<std::string>, SIZE> list;

};

int main () {

    int n;
    std::scanf("%d", &n);

    Dictionary dictionary;
    while (n--) {
        constexpr int COMMAND_SIZE = 7;
        char command[COMMAND_SIZE];
        constexpr int WORD_SIZE = 13;
        char word[WORD_SIZE];
        std::scanf("%s %s", &command, &word);
        if (command[0] == 'i') { // insert
            dictionary.insert(word);
        } else if (command[0] == 'f') { // find
            if (dictionary.find(word)) {
                std::puts("yes");
            } else {
                std::puts("no");
            }
        }
    }

    return 0;

}