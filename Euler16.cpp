#include <iostream>
//#include <cstring>
using namespace std;

int main() {
    clock_t c_start = clock();
    int N, carry;
    int *digits = new int [10001];
    int *summa = new int [10001];
    //memset(digits,-1,sizeof(digits));
    //memset(summa,0,sizeof(summa));
    //simple for loop much faster than memset
    for (int i = 0; i < 10001; ++i) {
        digits[i] = -1;
        summa[i] = 0;
    }
    digits[0] = 2;
    summa[0] = 2;
    for (int i = 1; i != 10001; i++) {
        int j = 0;
        carry = 0;
        //multiply digit by digit
        while(j != 10001) {
            if (digits[j] == -1) break; //current digits end
            digits[j] *= 2;
            digits[j] += carry;
            carry = digits[j] / 10;
            digits[j] = digits[j] % 10;
            summa[i] += digits[j];
            j++;
        }
        //adding the next digit if applicable
        if (carry > 0) {
            summa[i] += carry;
            digits[j] = carry;
        }
    }
    clock_t c_end = clock();
    cout << endl;
    cout << 1000.0*(c_end - c_start) / CLOCKS_PER_SEC << " ms\n";
    cin >> N;
    cout << summa[N - 1] << endl;
    return 0;
}