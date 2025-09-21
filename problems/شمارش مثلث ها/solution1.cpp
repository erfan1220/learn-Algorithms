#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,ans=0;
	cin>>n;
	for(int a=0; a<n; a++) {
		for(int b=a; b<n-a; b++) {
			int c = n - a - b;
			if(a+b > c && c>=b){
				ans++;
			}
		}
	}
	cout<<ans;
}