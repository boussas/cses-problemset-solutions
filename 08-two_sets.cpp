#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long s = n * (n + 1) / 2;
  if (s % 2 != 0) {
    cout << "NO";
    return 0;
  }
  long long s1 = 0, s2 = 0;
  vector < int > set1, set2;
  for (long long i = n; i >0; i--) {
    if (s1 > s2) {
      set2.push_back(i);
      s2 += i;
    } else {
      set1.push_back(i);
      s1 += i;
    }
  }
  cout << "YES"<<"\n" ;
  cout << set1.size()<<"\n";
  for (long long num: set1) {
    cout << num << " ";
  }
  cout <<"\n";
  cout << set2.size()<<"\n";
  for (long long num: set2) {
    cout << num << " ";
  }
  return 0;
}
