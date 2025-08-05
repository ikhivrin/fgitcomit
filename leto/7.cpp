#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, n, m;
    cin >> a >> b >> n >> m;

    int min_time1 = n + (n - 1) * a;
    int max_time1 = n + (n + 1) * a;
    int min_time2 = m + (m - 1) * b;
    int max_time2 = m + (m + 1) * b;

    int min_time = max(min_time1, min_time2);
    int max_time = min(max_time1, max_time2);

    if (min_time > max_time) {
        cout << -1 << endl;
    } else {
        cout << min_time << " " << max_time << endl;
    }

    return 0;
}