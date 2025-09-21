#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin >> n>>k;
	vector<long long int> arr(n),b(n);
	for (int i = 0; i < n; i++) cin >> arr[i];



	for(int i=0; i<n; i++) {
		b[i] = arr[i] - i*k;
	}


	sort(b.begin(), b.end());

    long long int M;
    if (n % 2 == 0) M = b[(n/2) - 1];
    else M = b[n/2];

    long long int ans = 0;
    for (int j = 0; j < n; j++) {
        ans += abs(b[j] - M);
    }
    cout << ans;
}