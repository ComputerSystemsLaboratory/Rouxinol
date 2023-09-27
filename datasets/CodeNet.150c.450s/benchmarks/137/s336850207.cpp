#include <cstring>
#include <string>
#include <memory>
#include <iostream>

/**
@note prime number and less than 1,000,000
*/
constexpr int max_size()
{
    return 1000003;
}

constexpr int null_val()
{
    return -1;
}

class dictionary {
public:
    dictionary()
        : _data(std::make_unique<int[]>(max_size()))
    {
        for (int i = 0; i < max_size(); ++i) {
            _data[i] = null_val();
        }
    }

    void insert(const std::string& str) {
        return insert(str2key(str), 0);
        return;
    }

    bool find(const std::string& str) {
        return find(str2key(str), 0);
    }

private:
    int str2int(const char ch) {
        if (ch == 'A') {
            return 1;
        }
        if (ch == 'C') {
            return 2;
        }
        if (ch == 'G') {
            return 3;
        }
        if (ch == 'T') {
            return 4;
        }
        return 0;
    }

    int str2key(const std::string& str)
    {
        int sum = 0;

        for (std::size_t i = 0; i < str.size(); ++i) {
            sum += str2int(str[i]);
            sum *= 5;   //move up;
        }
        
        return sum;
    }

    int base_hash(const int key) const
    {
        return key % max_size();
    }

    int collision_hash(const int key) const
    {
        constexpr int modulo = max_size() + 1;
        return 1 + key % modulo;
    }

    int create_hash(const int key, const int r) const 
    {
        const int base = base_hash(key);
        const int collision = collision_hash(key);
        const int h = (base + r * collision) % max_size();
        return h;
    }

    void insert(const int key, const int r)
    {
        const int h = create_hash(key, r);
        if (is_empty(h)) {
            _data[h] = key;
            return;
        }
        if (_data[h] == key) {
            return;
        }

        return insert(key, r + 1);
    }

    bool find(const int key, const int r) const
    {
        const int h = create_hash(key, r);
        if (is_empty(h)) {
            return false;
        }
        if (_data[h] == key) {
            return true;
        }

        return find(key, r + 1);
    }

    bool is_empty(const int idx) const {
        return _data[idx] == null_val();
    }

private:
    std::unique_ptr<int[]> _data;
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();

    dictionary dict;
    std::string buf;
    std::string ret;
    ret.reserve(4 * max_size());
    for (int i = 0; i < n; ++i) {
        getline(std::cin, buf);
        if (buf.front() == 'i') {
            static const std::size_t size = strlen("insert ");
            const std::string val
                = buf.substr(size, buf.size() - size);
            dict.insert(val);
        }
        else {
            static const std::size_t size = strlen("find ");
            const std::string val
                = buf.substr(size, buf.size() - size);
            ret += dict.find(val) ? "yes\n" : "no\n";
        }
    }

    std::cout << ret;
    return 0;
}