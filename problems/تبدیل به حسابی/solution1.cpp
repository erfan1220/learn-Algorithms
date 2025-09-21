#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,m=1e9,M=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		if(arr[i] < m) {
			m=arr[i];
		}
		if(arr[i] > M) {
			M = arr[i];
		}
	}
	int ans=0, mans=1e9;

	for(int i=(m-(n-1)*k);
	i<=M;
	i++) {
		ans = 0;
		for(int j=0; j<n; j++) {
			ans += abs(i+(j*k)-arr[j]);
		}
		if(ans < mans) {
			mans = ans;
		}
	}
	cout<<mans;

}

