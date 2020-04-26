#include <bits/stdc++.h>
using namespace std;

string s;

int check(int i, int j) {
  if (i < j) {
    string tmp = s.substr(i, j - i);
    int num = stoi(tmp);
    if (num % 2019 == 0) {
      return 1;
    } else {
      return 0;
    }
  }
}

void search(string s) {
  int sum = 0;
  if (s.size() < 4) {
    cout << 0;
  } else {
    for (int i = 0; i < s.size() - 3; i++) {
      for (int j = i + 3; j < s.size(); j++) {
        sum += check(i, j);
      }
    }
  }
  cout << sum;
}

int main() {
  cin >> s;
  search(s);
}