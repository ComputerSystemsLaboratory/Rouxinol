#include <iostream>
#include <string>

class node {
public:
    node()
        : _key(),
        _previous(this),
        _next(this)
    {}

    node(const int key,
        node* previous,
        node* next)
        : _key(key),
        _previous(previous),
        _next(next)
    {}

    node* privious() const
    {
        return _previous;
    }

    node* next() const
    {
        return _next;
    }

    int key() const {
        return _key;
    }

    void set_previous(node* previous)
    {
        _previous = previous;
        return;
    }

    void set_next(node* next)
    {
        _next = next;
        return;
    }

private:
    int _key;
    node* _previous;
    node* _next;
};

class list {
public:
    list() : _origin(new node())
    {}

    void insert(const int val) {
        node* newnode
            = new node(val, _origin, _origin->next());
        _origin->next()->set_previous(newnode);
        _origin->set_next(newnode);
    }

    void erase(const int val) {
        node* pos = _origin->next();
        for (;pos != _origin; pos = pos->next())
        {
            if (pos->key() == val) {
                break;
            }
        }
        if (pos != _origin) {
            this->erase(pos);
        }
        return;
    }

    void erase_first() {
        this->erase(_origin->next());
    }

    void erase_last() {
        this->erase(_origin->privious());
    }

    void print() const {
        node* pos = _origin->next();
        for (; pos->next() != _origin; pos = pos->next()) {
            std::cout << pos->key();
            std::cout << " ";
        }
        std::cout << pos->key();
        return;
    }

private:
    void erase(node* pos) {
        pos->privious()->set_next(pos->next());
        pos->next()->set_previous(pos->privious());
        delete pos;
        return;
    }

private:
    node* _origin;
};

void execute(list& l, const std::string& command)
{
    if (command == "deleteFirst") {
        l.erase_first();
        return;
    }
    if (command == "deleteLast") {
        l.erase_last();
        return;
    }
    const std::string cmd
        = command.substr(0, command.find(' '));
    const int val
        = std::stoi(command.substr(command.find(' ') + 1, command.size()));
    if (cmd == "insert") {
        l.insert(val);
        return;
    }
    if (cmd == "delete") {
        l.erase(val);
        return;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();  //ignore \n

    list l;
    std::string buf;
    for (int i = 0; i < n; ++i) {
        getline(std::cin, buf);
        execute(l, buf);
    }
    l.print();
    std::cout << std::endl;

    return 0;
}