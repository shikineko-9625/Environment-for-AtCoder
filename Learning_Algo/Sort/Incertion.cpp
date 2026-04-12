#include <bits/stdc++.h>
using namespace std;

void mySort(array<int,25>& ar);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  random_device seed_gen;
  mt19937 engine(seed_gen());
  uniform_int_distribution<> dist(-10, 10);
  array<int,25> ar{};
  for (long unsigned int i=0;i<ar.size();i++) {
    int random_value=dist(engine);
    ar[i]=random_value;
  }

  mySort(ar);

  for (long unsigned int i=0;i<ar.size();i++) cout<<ar[i]<< ' ';
}

void mySort(array<int,25>& ar){
  int n=(int)ar.size();
  for (int i = 1; i < n; i++) {
    if (ar[i - 1] > ar[i]) {
      int j = i;
      int tmp = ar[i];
        do {
          ar[j] = ar[j - 1];
            j--;
        } while (j > 0 && ar[j - 1] > tmp);
        ar[j] = tmp;
    }
  }
}