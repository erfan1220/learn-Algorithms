#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int ans=0;
	cin>>n;
	for(int a=1; a<=(n/3); a++) {
		ans += ((n-(3*a))/2) - max(0 , (n/2)-(2*a)+1) + 1;
	}
	cout<<ans;
}