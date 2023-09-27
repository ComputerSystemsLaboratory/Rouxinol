#include <iostream>

using namespace std;

class element{
private:
    string name;
    bool end;
    int time;
public:
    element(){}
    element(string n, int t) {
        name = n;
        time = t;
        end  = false;
    }
    int processing(int q) {
        if (time > q) {
            time -= q;
            return q;
        }
        int ret = time;
        time = 0;
        end = true;
        return ret;
    }
    string get_name() {
        return name;
    }
    int get_time() {
        return time;
    }
    bool get_end() {
        return end;
    }
};

class table{
private:
    element* e;
    int n;
    int process_time;
    int head;
    int tail;
    int total_time;
    bool is_empty;

    element de_que() {
        if (head == tail) is_empty = true;
        element ret = e[head];
        if (head < n - 1) {
            head++;
        } else {
            head = 0;
        }
        return ret;
    }

    void processing() {
        element e1 = de_que();
        total_time += e1.processing(process_time);
        if (e1.get_end()) {
            cout << e1.get_name() << " " << total_time << endl;
            return;
        }
        en_que(e1);
    }
public:
    table(int n_in, int p_in) {
        n = n_in;
        e = new element[n];
        process_time = p_in;
        head =  0;
        tail = -1;
        total_time = 0;
        is_empty = true;
    }
    void en_que(element input_element) {
        if (tail < n - 1) {
            tail++;
        } else {
            tail = 0;
        }
        if (is_empty) is_empty = false;
        e[tail] = input_element;
    }
    void all_processing() {
        while(!is_empty) {
            processing();
        }
    }
};


int main(void)
{
    int n, p_time;
    cin >> n >> p_time;
    table t(n, p_time);
    for (int i = 0; i < n; i++) {
        string name;
        int time;
        cin >> name >> time;
        element e(name, time);
        t.en_que(e);
    }
    t.all_processing();
    return 0;
}