# SONGUYEN
# CD2B18 - Nguồn của số nguyên (Luyện code)
Final exam...
P4: THE ORIGIN NUMBER
N = abc...
M = N + a + b + c + ...
Given M, find N

M <= 2^128
https://oj.luyencode.net/problem/CD2B18
C++ (7/20)
```cpp
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

int main() {
    unsigned long long m,n,i;
    cin >> m;
    n = 9*int(log10(m)+0.5);
    if (n > m) {
        n = 0;
    } else {
        n = m - n;
    }
    for(i= n; i <= m; ++i) {
        if (i + sumOfNum(i) == m) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}

```

P4 - Python 3 (Accept 20/20)
```python
m=int(input())
ans=m
for n in range(m,m-9*len(str(m))-1,-1):
    t=sum(map(int,str(n)))
    if(n+t==m):ans=min(ans,n)
    if(n<=0): break;
if(ans!=m): print(ans)
else: print(0)
```
P4: C++ (Accepted 20/20 :D)
```cpp
#include <bits/stdc++.h>
#include <string>
#include <cstdint>
using namespace std;
typedef uint_fast64_t U64;

string subOfNStr(string s1, string s2) {
    //s1 must be bigger than s2
    //empty string for the result
    string s = "";

    int n1 = s1.length(), n2 = s2.length();
    int diff = n1 - n2;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i = n2 - 1; i >= 0; i--) {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((s1[i + diff] - '0') - (s2[i] - '0') - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        s.push_back(sub + '0');
    }

    // subtract remaining digits of s1[]
    for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (s1[i] == '0' && carry) {
            s.push_back('9');
            continue;
        }
        int sub = ((s1[i] - '0') - carry);
        if (i > 0 || sub > 0) // remove preceding 0's
            s.push_back(sub + '0');
        carry = 0;
    }

    // reverse resultant string
    reverse(s.begin(), s.end());


    return s;
}

int sumOfString(string s) {
    int p = 0;
    for (char ch : s) {
        p += ch - '0';
    }
    return p;
}

int main() {
    unsigned long long m, n, i;
    string s, l;
    cin >> s;
    n = s.length();
    if (n < 3) {
        m = stoi(s);
        if (m < 2) {
            cout << 0;
            return 0;
        }
        if (m < 9) {
            n = m;
        }
    } else n *= 9;
    for (i = n; i > 0; --i) {
        l = subOfNStr(s, to_string(i));
        if (i == sumOfString(l)) {
            cout << l << endl;
            return 0;
        }
    }
    cout << 0;
    return 0;
}

```

P3: COUPLE THAT HAS GCD OF 1
```cpp
#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long n,i,j,s,a[10005];
    cin >> n;
    s=0;
    for (i = 0; i<n; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        for (j = i; j < n; ++j) {
            if (gcd(a[i], a[j]) == 1) s++;
        }
    }
    cout << s;
    return 0;
}
```
