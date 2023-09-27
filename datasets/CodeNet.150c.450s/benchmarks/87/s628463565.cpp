#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool drop(vector< vector<int> > &v_v);
int caluculate_score_of_line(vector<int> &v, int bidx, int eidx);
int apply_to_line(vector<int> &v);
int apply_to_lines(vector< vector<int> > &v_v);
void disp_v(vector<int> &v);
void disp_v_v(vector< vector<int> > &v_v);

bool drop(vector< vector<int> > &v_v) {
    int drop_count = 0;
    for (int j=0; j<5; j++) {
        for (int i=v_v.size()-1; i>-1; i--) {
            if (v_v[i][j] == 0) {
                int above_idx = i - 1;
                while (above_idx>=0) {
                    if (v_v[above_idx][j] > 0) {
                        v_v[i][j] = v_v[above_idx][j];
                        v_v[above_idx][j] = 0;
                        drop_count ++;
                        break;
                    }
                    above_idx--;
                }
            }
        }
    }

    if (drop_count > 0) {
        // cout << "DROP" << endl;
        // disp_v_v(v_v);
        return true;
    } else {
        return false;
    }
}

int caluculate_score_of_line(vector<int> &v, int bidx, int eidx) {
    int score_of_element = v[bidx];
    for (int i=bidx; i<=eidx; i++) {
        v[i] = 0;
    }
    return score_of_element * (eidx-bidx+1);
}

int apply_to_line(vector<int> &v) {
    int bef = 0, bef_count = 0, bidx = 0;
    for (int i=0; i<v.size(); i++) {
        if ((bef!=0)&&((bef!=v[i])||(v[i]==0))) {
            // ?????¶??????????????£?¶????????°???§????????´????????????
            if (bef_count>=3) {
                return caluculate_score_of_line(v, bidx, i-1);
            }
            bef_count = 0;
            bidx = i;
        }
        bef_count++;
        bef = v[i];
    }
    // ????°??????£?¶??????\???????????´????????????
    if (bef_count>=3) {
        return caluculate_score_of_line(v, bidx, v.size()-1);
    }
    return 0;
}

int apply_to_lines(vector< vector<int> > &v_v) {
    int score_of_lines = 0;
    for (int i=0; i<v_v.size(); i++) {
        score_of_lines += apply_to_line(v_v[i]);
    }
    return score_of_lines;
}

void disp_v(vector<int> &v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void disp_v_v(vector< vector<int> > &v_v) {
    for (int i=0; i<v_v.size(); i++) {
        disp_v(v_v[i]);
    }
}

int main() {
    int i, j, n, tmp;
    string s;
    while ((cin >> n) && (n != 0)) {
        int ans = 0;
        vector< vector<int> > v_v;
        for (i=0; i<n; i++) {
            vector<int> v;
            for (j=0; j<5; j++) {
                cin >> tmp;
                v.push_back(tmp);
            }
            v_v.push_back(v);
        }
        // disp_v_v(v_v);
        ans += apply_to_lines(v_v);
        // disp_v_v(v_v);
        // ?????¨???????????????????????°?¶???????
        // drop(v_v)???false????????£?????¨??????????????\???????????§?????????
        while (drop(v_v)) {
            ans += apply_to_lines(v_v);
            // disp_v_v(v_v);
        }
        cout << ans << endl;
    }

    return 0;
}