#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, h, m, theta, phi, xi, x;
  double pi = M_PI;
  cin >> a >> b >> h >> m;

  phi = (m / 60);
  xi = ((((h * 60) + m) / 720));
  theta = ((11 * m) - (60 * h)) * pi / 360;
  x = sqrt((a * a) + (b * b) - (2 * b * cos(((11 * m) - (60 * h)) * pi / 360)));
  cout << fixed << setprecision(20)
       << sqrt((a * a) + (b * b) -
               (2 * a * b * cos(((11 * m) - (60 * h)) * pi / 360)))
       << endl;
}