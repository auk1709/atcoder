#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> p;
  for(int i=0;i<n;i++){
    int t;
    cin >> t;
    p.push_back(t);
  }
  int sum = 0;
  sort(p.begin(),p.end());
  for(int i=0;i<k;i++){
    sum += p[i];
  }

  cout << sum << endl;
}