#include <stdio.h>

typedef unsigned __int128 uint128;

/* printing 128-bit value isn't official support yet
   so here's implementation of converting 128-bit value into string */
char *str_uint128(uint128 n) {
    /* got confused about arithmetic operation with '0'? read more about ascii :) */
    static char buf[1000] = {0}, *buft = buf;
    int nbuf = 1000;

    if (n == 0)
        *buft = '0'; // obviously
    else for(buft += nbuf - 2; n > 0; n /= 10) // ever heard else-for? ;)
            *--buft = '0' + (n % 10);

    return buft;
}

uint128 fact(int N) // calculate factorial with O(n)
{
    uint128 n, i;
    for(n = i = 1; i <= N; i++)
        n *= i;
    return n;
}

int main()
{
    printf("%d! -> %s\n", 5, str_uint128(fact(5)));
    printf("%d! -> %s\n", 10, str_uint128(fact(10)));
    printf("%d! -> %s\n", 15, str_uint128(fact(15)));
}
/*
#include <iostream>
#include <vector>
using namespace std;
int len(int n){
 int count = 0;
 while (n > 0){
  count += 1;
  n = n / 10;
 }
 return count;
}
int min(vector<int> arr){
 int min = arr[0];
 for (int i = 0; i < arr.size(); i++){
  if (arr[i] < min) min = arr[i];
 }
 return min;
}
int sum( int n){
 int s = 0;
 while (n > 0){
  s += n % 10;
  n = n / 10;
 }
 return s;
}
int main(){
 int n;
 vector<int> arr;
 cin >> n;
 for (int i = 9*len(n); i >= 0; i--){
  int tmp = n - i;
  if (tmp + sum(tmp) == n){
   arr.push_back(tmp);
  }
 }
 if (arr.size() == 0){
  cout << -1;
 } else {
  cout << min(arr);
 }
}
/*
#include <iostream>

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
    unsigned long long n, i;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cout << i << ": " << i+sumOfNum(i) << endl;
    }
    return 0;
}

/*
199956: 199995
199957: 199997
199958: 199999
199959: 200001
199960: 199994
199961: 199996
199962: 199998
199963: 200000
199964: 200002
199965: 200004
199966: 200006
199967: 200008
199968: 200010
199969: 200012
199970: 200005
199971: 200007
199972: 200009
199973: 200011
199974: 200013
199975: 200015
199976: 200017
199977: 200019
199978: 200021
199979: 200023
199980: 200016
199981: 200018
199982: 200020
199983: 200022
199984: 200024
199985: 200026
199986: 200028
199987: 200030
199988: 200032
199989: 200034
199990: 200027
199991: 200029
199992: 200031
199993: 200033
199994: 200035
199995: 200037
199996: 200039
199997: 200041
199998: 200043
199999: 200045
200000: 200002
200001: 200004
200002: 200006
200003: 200008
200004: 200010
*/
