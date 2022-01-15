#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N][26];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin >> n >> q;
		string s;
		cin >> s;
		for(int i=0; i<n; ++i){
			hsh[i+1][s[i]-'a']++;
		}
		for(int i=0; i<26; ++i){
			for(int j=1; i<=n; ++i){
				hsh[j][i] += hsh[j-1][i];
			}
		}
		while(q--){
			int l,r;
			cin >> l >> r;
			int oddct = 0;
			for(int i=0; i<26; ++i){
				int charct = hsh[r][i] - hsh[l-1][i];
				if(charct % 2 != 0) oddct++;
			}
			if(oddct>1) cout<<"NO\n";
			else cout << "YES\n";

		}
	}


	// int t;
	// cin >> t;
	// while(t--){
	// 	int n,q;
	// 	cin >> n>> q;
	// 	string s;
	// 	cin >> s;
	// 	while(q--){
	// 		int l,r;
	// 		cin >> l >> r;
	// 		int hsh[26];
	// 		for(int i=0; i<26; ++i){
	// 			hsh[i]=0;
	// 		}
	// 		l--;r--;
	// 		for(int i=l; i<=r; ++i){
	// 			hsh[s[i]-'a']++;
	// 		}
	// 		int oddct=0;
	// 		for(int i=0; i<26; ++i){
	// 			if(hsh[i] % 2 !=0) oddct++;
	// 		}
	// 		if(oddct>1)cout << "NO\n";
	// 		else cout<<"YYES\n";
	// 	}

	// 	//O(T) = T*Q*(N) = 10 * 10^5 * 10^5
	// }

}