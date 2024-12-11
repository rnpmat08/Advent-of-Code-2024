#include <iostream>
#include <vector>

using namespace std;

vector<int> a(1000), b(1000);

int main() {
    // control + f, then press space 3 times
    // in this example, it gave me 1000 lines of input
    for (int i = 0; i < 1000; i++) cin >> a[i] >> b[i];
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < 1000; i++) ans += abs(a[i] - b[i]);
    cout << ans;
    return 0;
}
