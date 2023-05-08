#include <bits/stdc++.h>
#define nmax 1000005
#define ll long long

using namespace std;

int tong_chu_so(long long k)
{
    int tong=0;
    while (k>0)
    {
        tong+=k%10;
        k/=10;
    }
    return tong;
}
int main()
{
   ios_base::sync_with_stdio(false),
   cin.tie(0), cout.tie(0);
   long long n,ans=0;
   cin>>n;
   for (int i=1 ; i<=9*int(log10(n) + 0.5) ; i++){
        if (i == tong_chu_so(n-i)) ans=n-i;
   }
   cout<<ans;

}
