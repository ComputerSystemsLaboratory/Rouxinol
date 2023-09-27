#include <iostream>
#include <string>
#include <set>

class Dictionary {

public:
    void insert(std::string word) {
        strList.insert(word);
    }

    void find(std::string word) {
        auto elemItr = strList.find(word);
        if (elemItr == strList.cend()) {
            std::cout << "no";
        } else {
            std::cout << "yes";
        }
        std::cout << std::endl;
    }

private:
    std::set<std::string> strList;

};

void useDictionary(Dictionary &dictionary, std::string command, std::string word) {
    if (command == "insert") {
        dictionary.insert(word);
    } else if (command == "find") {
        dictionary.find(word);
    }
}

int main () {

    std::size_t n;
    std::cin >> n;

    Dictionary dictionary;
    while (n--) {
        std::string command, word;
        std::cin >> command >> word;
        useDictionary(dictionary, command, word);
    }

    return 0;

}