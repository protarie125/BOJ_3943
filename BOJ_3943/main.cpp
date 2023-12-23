#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  cin >> t;
  while (0 < (t--)) {
    cin >> n;
    ans = n;

    while (1 < n) {
      if (0 == n % 2) {
        n /= 2;
      } else {
        n *= 3;
        n += 1;
      }

      ans = max(ans, n);
    }

    cout << ans << '\n';
  }

  return 0;
}