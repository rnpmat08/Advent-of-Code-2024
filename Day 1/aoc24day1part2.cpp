#include <iostream>

using namespace std;

int a[1000], b[1000], cb[100000];

int main() {
    // control + f, then press space 3 times
    // in this example, it gave me 1000 lines of input
    for (int i = 0; i < 1000; i++) {
        cin >> a[i] >> b[i];
        cb[b[i]]++;
    }
    int ans = 0;
    for (int i : a) ans += i * cb[i];
    cout << ans;
    return 0;
}