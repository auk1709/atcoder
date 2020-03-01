
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> bingo(3, vector<int>(3));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> bingo.at(i).at(j);
    }
  }

  int n;
  cin >> n;

  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b.at(i);
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (b.at(i) == bingo.at(j).at(k)) {
          bingo.at(j).at(k) = 0;
          break;
        }
      }
    }
  }

  int flag = 0;
  for (int i = 0; i < 3; i++) {
    if (bingo.at(i).at(0) == 0 && bingo.at(i).at(1) == 0 &&
        bingo.at(i).at(2) == 0) {
      flag = 1;
      break;
    } else if (bingo.at(0).at(i) == 0 && bingo.at(1).at(i) == 0 &&
               bingo.at(2).at(i) == 0) {
      flag = 1;
      break;
    }
  }
  if (bingo.at(0).at(0) == 0 && bingo.at(1).at(1) == 0 &&
          bingo.at(2).at(2) == 0 ||
      bingo.at(0).at(2) == 0 && bingo.at(1).at(1) == 0 &&
          bingo.at(2).at(0) == 0) {
    flag = 1;
  }
  if (flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}