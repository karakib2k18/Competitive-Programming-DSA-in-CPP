#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>> t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int arr[n+10];
		for(int i=1; i<=n; ++i){
			cin>>arr[i];
		}
		int forward[n+10];
		int backward[n+10];
		forward[0] = forward[n+1] = 0;
		for(int i=1; i<=n; ++i){
			forward[i]= __gcd(forward[i-1], arr[i]);
		}
		for(int i=n; i>=1; --i){
			backward[i]= __gcd(backward[i+1], arr[i]);

		}
		while(q--){
			int l,r;
			cin>> l >> r;
			cout<< __gcd(forward[l-1],backward[r+1]) << endl;
			//O(T*(N+N) = O(T*N)=100^2



			// int gc = 0;
			// for(int i=1; i<=l-1; ++i){
			// 	gc = __gcd(gc, arr[i]);
			// }
			// for(int i=r+1; i<=n; ++i){
			// 	gc = __gcd(gc, arr[i]);
			// }
			// cout<<gc << endl;
			//O(T*(N+Q*(N+N)) = O(T*(N+Q*N))=O(T*Q*N)=100^3
			
		}
	}
	
}