#include <bits/stdc++.h>
using namespace std;

void test() {
    long long row, col, ans;
    cin >> row >> col;
    long long layer = max(row, col);

    if (layer % 2 == 1) {
        swap(row, col);
    }

    if (col == layer) {
        ans = (layer - 1) * (layer - 1) + row;
    } else {
        ans = layer * layer - col + 1;
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}
