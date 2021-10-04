#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <climits>

using namespace std;

typedef long long ll;

bool winning(ll n) {
    if (n == 1) return true;
    if (n % 4 == 0) return true;
    if (n % 2 == 0) return !winning(n / 2);
    return !winning(n - 1);
}

void solve() {
    ll n; cin >> n;
    if (winning(n)) cout << "Alice\n"; else cout << "Bob\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
