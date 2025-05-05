/* https://judge.beecrowd.com/pt/problems/view/1025 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int caso = 1;
    int n, q;

    while (cin >> n >> q) {
        if (n == 0 && q == 0)
            break;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        cout << "CASE# " << caso << ":" << endl;

        for (int i = 0; i < q; i++) {
            int achar;
            cin >> achar;

            int l = 0, r = n - 1;
            int res = -1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (a[mid] == achar) {
                    res = mid;
                    r = mid - 1;
                } else if (achar > a[mid]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if (res == -1)
                cout << achar << " not found" << endl;
            else
                cout << achar << " found at " << res + 1 << endl;
        }

        caso++;
    }

    return 0;
}
