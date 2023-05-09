# SONGUYEN
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
