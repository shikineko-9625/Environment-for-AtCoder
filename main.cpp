#include <bits/stdc++.h>
using namespace std;

string to_base(long long n, int base)
{
  string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  if (n == 0)
    return "0";

  string res = "";
  while (n > 0)
  {
    res = digits[n % base] + res;
    n /= base;
  }
  return res;
}

int main()
{
  long long n;
  cin >> n;
  cout << to_base(n, 2) << endl;  // n2
  cout << to_base(n, 16) << endl; // n16
  cout << to_base(n, 36) << endl; // n36
}