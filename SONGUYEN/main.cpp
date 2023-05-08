#include <bits/stdc++.h>
#include <string>
#include "uint128_t/uint128_t.h"
using namespace std;

uint128_t sumOfNum(uint128_t n) {
    uint128_t s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int test(uint128_t m, int n) {
    if (m < 2) {
        cout << 0 << endl;
        return 0;
    }
    uint128_t i;
    cout << "DIFF 9: " << m % 9 << endl;
    cout << "NUM: " << n << " --- " << n << endl;
    for(i= 9*n; i > 0; i--) {
        if (i == sumOfNum(m - i)) {
            cout << m - i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

int main() {
    string n;
    while (true) {
    cin >> n;
    int l = n.length();
    test(uint128_t (n, 10),l-1);
    }
    return 0;
}


/*

int test(uint128_t m) {
    if (m < 2) {
        cout << 0 << endl;
        return 0;
    }
    uint128_t n,i;
    n = 9*int(log10(m)+0.75);
    cout << "DIFF 9: " << m % 9 << endl;
    cout << "NUM: " << n << " --- " << int(log10(m)+0.5) << endl;
    for(i= n; i > 0; i--) {
        if (i == sumOfNum(m - i)) {
            cout << m - i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

int main() {

}

/**
int sumOfString(string s) {
    int p = 0;
    for (char ch : s) {
        p += ch - '0';
    }
    return p;
}

string sumOfStrings(string a, string b) {
    if(a.size() < b.size()) swap(a, b);

    int j = a.size()-1;
    for(int i=b.size()-1; i>=0; i--, j--)
        a[j]+=(b[i]-'0');

    for(int i=a.size()-1; i>0; i--) {
        if(a[i] > '9') {
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9') {
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}

string test(string m) {
    int i,k,l,p;
    string n,a,b,c;
    i = m.length();
    k = int(log10(9*i) + 0.5);
    c = m.substr(i-k);
    l = sumOfString(m);
    p = 0;
    b = m.substr(0,i-k);
    p = sumOfString(b);
    while (p < 9*i && k < i) {
        k++;
        a = m.substr(i-k);
    }

    cout << "i: " << i << endl;
    cout << "k: " << k << endl;
    cout << "l: " << l << endl;
    cout << "p: " << p << endl;
    cout << "Xet a: " << a << endl;
    cout << "Khoong xet b: " << b << endl;
    cout << "Tru c: " << c << endl;
    int j;
    for (j = 9*i; j >0; j--) {
        cout << j << " : " << sumOfStrings(a, to_string(j)) << endl;
        //if (j == sumOfString(sumOfStrings(a, to_string((-1) * j)))) {
            //cout << "BING: " << b << sumOfString(sumOfStrings(a, to_string((-1) * j))) << endl;
        //}
        //if (j == sumOfStrings())
        //if (m == sumOfStrings(m.substr(0,i-k), sumOfString())) {
           // cout << "DEBUG: " << m.substr(0,i-k) << a-j << endl;
        //}
    }
    //200002 ->  199964
    return "";
}

int main() {
    string m, n;
    while (true) {
        cin >> m >> n;
        cout << sumOfStrings(m, n) << endl;
    }
    //cin >> m;
    //m = "216";
    //cout << m << endl;
    //test(m);
    return 0;
}
*/
