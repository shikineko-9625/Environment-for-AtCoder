#include <bits/stdc++.h>
using namespace std;

void mySort(array<int,25>& ar);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  random_device seed_gen;
  mt19937 engine(seed_gen());
  uniform_int_distribution<> dist(0, 1024);
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
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(ar[j]>ar[j+1]) swap(ar[j],ar[j+1]);
    }
  }
}


