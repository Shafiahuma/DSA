#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<string> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }

    vector<int> p(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> p[i];
    }

    int ans = 0;
    for (const string& v : c) {
        int price = p[0];
        for (int j = 0; j < m; j++) {
            if (v == d[j]) {
                price = p[j + 1];
                break;
            }
        }
        ans += price;
    }

    cout << ans << endl;

    return 0;
}
