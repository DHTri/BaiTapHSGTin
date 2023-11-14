#include <bits/stdc++h>
using namespace std;
int main() {
    long long a, sum = 0;
    cin >> a;
    for (int i = 0; i <= a; ++i) {
        sum += 2 * i + 1;
    }
    cout << sum << endl;
    return 0;
}
