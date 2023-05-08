#include <bits/stdc++.h>
using namespace std;

int sumOfNum(long long n) {
    int s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int test(unsigned long long m) {
    unsigned long long n,i;
    n = 9*int(log10(m)+0.75);
    if (n > m) {
        n = 0;
    } else {
        n = m - n;
    }
    cout << "DIFF 9: " << m % 9 << endl;
    cout << "NUM: " << n << " --- " << int(log10(m)+0.5) << endl;
    for(i= n; i <= m; ++i) {
        cout << "DEBUG: " << i << " + " << sumOfNum(i) << " -> " << i + sumOfNum(i) << endl;
        if (i + sumOfNum(i) == m) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

int main() {
    unsigned long long n;
    while (true) {
        cin >> n;
        test(n);
    }
    return 0;
}
