#include <iostream>
using namespace std;

string a, b;

int convert(string s){
    int i=0;
    int convert_num = 0;
    
    while(i < s.length()){
        if(s[i] >= '0' && s[i] <= '9'){
            int n = s[i] - '0';
            switch (s[i+1])
            {
            case 'm' : convert_num += n * 1000; break;
            case 'c' : convert_num += n * 100; break;
            case 'x' : convert_num += n * 10; break;
            case 'i' : convert_num += n * 1; break; 
            default:   break;
            }
            i += 2;
        }else{
            switch (s[i])
            {
            case 'm' : convert_num += 1000; break;
            case 'c' : convert_num += 100; break;
            case 'x' : convert_num += 10; break;
            case 'i' : convert_num += 1; break; 
            default:   break;
            }  
            i += 1;
        }
    }
    return convert_num;
}

int add(int a, int b){
    return a + b;
}

string re_convert(int num){
    string str;
    if(num >= 1000){
        if(num/1000 > 1){
            str += num/1000 + '0';
        }
        str += 'm';
        num = num % 1000;
    }

    if(num >= 100){
        if(num/100 > 1){
            str += num/100 + '0';

        }
        str += 'c';
        num = num % 100;
    }

    if(num >= 10){
        if(num/10> 1){
            str += num/10 + '0';
        }
        str += 'x';
        num = num % 10;
    }

    if(num >= 1){
        if(num > 1){
            str += num + '0';
        }
        str += 'i';
        num = num % 1000;
    }
    return str;
}


int main(void){
    int convert_a, convert_b, sum_num;
    int n;
    string str;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> a >> b;
        convert_a = convert(a);
        convert_b = convert(b);
        sum_num = add(convert_a, convert_b);
        str = re_convert(sum_num);
        cout << str << endl;
    }
    return 0;
}
