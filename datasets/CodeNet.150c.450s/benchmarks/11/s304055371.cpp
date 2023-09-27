#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void check(vector<int> input, char suit){
    bool one = false, two = false, three = false, four = false, five = false, six = false, seven = false, eight = false, nine = false, ten = false, eleven = false, twelve = false, thirteen = false;
    for(int i = 0; i < input.size(); ++i){
        switch(input[i]){
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            case 10:
                ten = true;
                break;
            case 11:
                eleven = true;
                break;
            case 12:
                twelve = true;
                break;
            case 13:
                thirteen = true;
                break;
        }
    }
    for(int i = 1; i <= 13; ++i){
        switch(i){
            case 1:
                if(one == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 2:
                if(two == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 3:
                if(three == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 4:
                if(four == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 5:
                if(five == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 6:
                if(six == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 7:
                if(seven == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 8:
                if(eight == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 9:
                if(nine == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 10:
                if(ten == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 11:
                if(eleven == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 12:
                if(twelve == false){
                    cout << suit << " " << i << endl;
                }
                break;
            case 13:
                if(thirteen == false){
                    cout << suit << " " << i << endl;
                }
                break;
                
        }
    }
}
int main(){
    int cases, num;
    char suit;
    vector<int> spades;
    vector<int> diamonds;
    vector<int> hearts;
    vector<int> clubs;
    cin >> cases;
    for(int i = 0; i < cases; ++i){
        cin >> suit >> num;
        switch(suit){
            case 'S':
                spades.push_back(num);
                break;
            case 'H':
                hearts.push_back(num);
                break;
            case 'D':
                diamonds.push_back(num);
                break;
            case 'C':
                clubs.push_back(num);
                break;
        }
    }
    check(spades, 'S');
    check(hearts, 'H');
    check(clubs, 'C');
    check(diamonds, 'D');
}