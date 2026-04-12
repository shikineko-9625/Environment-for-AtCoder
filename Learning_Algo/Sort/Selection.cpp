#include <bits/stdc++.h>
using namespace std;

void mySort(array<int,15>& ar);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  random_device seed_gen;
  mt19937 engine(seed_gen());
  uniform_int_distribution<> dist(1, 16);
  array<int,15> ar{};
  for (long unsigned int i=0;i<ar.size();i++) {
    int random_value=dist(engine);
    ar[i]=random_value;
  }

  mySort(ar);

  for (long unsigned int i=0;i<ar.size();i++) cout<<ar[i]<< ' ';
}

void mySort(array<int,15>& ar){
  int n=(int)ar.size();
  for(int i=0;i<n-1;i++){
    auto min_ar=min_element(ar.begin()+i,ar.end());
    int index=distance(ar.begin(),min_ar);//別になくても良い、coutとかするなら必要
    swap(ar[i],ar[index]);
  }
}
