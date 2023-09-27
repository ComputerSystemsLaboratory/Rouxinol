#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string t, h;
    int n, t_len, h_len, itr, t_score, h_score;
    t_score = 0;
    h_score = 0;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> t >> h;
        itr = 0;
        t_len = t.length();
        h_len = h.length();
        while(true){
            if(itr < t_len && itr < h_len){
                if(t[itr] > h[itr]){
                    t_score += 3;
                    break;
                }
                else if(t[itr] < h[itr]){
                    h_score += 3;
                    break;
                }
                else {
                    itr++;
                }
            }
            // draw
            else if(itr == t_len && itr == h_len){
                t_score++;
                h_score++;
                break;
            }
            else {
                if(t_len > h_len){
                    t_score += 3;
                    break;
                }
                else if(h_len > t_len){
                    h_score += 3;
                    break;
                }
            }
        }
    }
    cout << t_score << " " << h_score << endl;
    return 0;
}

