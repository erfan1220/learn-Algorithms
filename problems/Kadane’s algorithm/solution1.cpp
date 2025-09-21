#include <bits/stdc++.h>
using namespace std;

int main() {
	//solve problem with out kadanes algo O(n*2)
	
	long long int n, k = 0, max = -(1e9);
	cin >> n;
	vector<long long int> arr(n),b(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	for(int i=0; i<n; i++) {
		k=arr[i];
		if(k>max) max = k;
		for(int j=i+1; j<n; j++) {
			k+=arr[j];
			if(k>max) max = k;
		}

	}
	cout<<max;
}