#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), even,odd;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      if(a[i]%2==0){
      	even.push_back(a[i]);
      }else{
      	odd.push_back(a[i]);
      }
    }
    bool answer = is_sorted(even.begin(), even.end());
    answer &= is_sorted(odd.begin(), odd.end());

    cout<< (answer ? "YES": "NO") <<endl;


	
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}