#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 1000000;
  vector<bool> prime(n/2+1,true);
  //prime[i] は 2*i+1 が素数かを表す
  prime[0] = false; //1は素数ではない

  for(int i=3;1LL*i*i<=n;i+=2){
    if (!prime[i/2]) continue;
    for(int j=i*i;j<=n;j+=2*i){
      prime[j/2]=false;
    }
  }
  auto is_prime=[&](int x)->bool{
    if (x==2) return true;
    if (x<2||x%2==0||x>n) return false;
    return prime[x/2];
  };
}