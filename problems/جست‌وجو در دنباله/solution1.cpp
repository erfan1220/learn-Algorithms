#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n), ques(q);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < q; i++) cin >> ques[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; i++) {
        int res = lower_bound(arr.begin(), arr.end(), ques[i]) - arr.begin();
        cout << res << "\n";
    }
}

