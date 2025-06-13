#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    for (int y = 0; y < 2; y++) {
        if ((n - y * k) >= 0 && (n - y * k) % 2 == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
