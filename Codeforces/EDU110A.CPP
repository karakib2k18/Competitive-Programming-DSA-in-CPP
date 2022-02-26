/*

#Connect with me

LinkedIn: https://www.linkedin.com/in/karakib2k18/
Facebook: https://www.facebook.com/karakib2k18
Codeforces: https://codeforces.com/profile/karakib2k18
Instragram: https://www.instagram.com/kazi_abdur_rakib/
Github: https://github.com/karakib2k18
Portfolio: https://kaziabdurrakib.netlify.app/

*/

//https://codeforces.com/problemset/problem/1535/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
      cin >> a[i];
    }
    int x = max(a[0], a[1]), y = max(a[2], a[3]);
    sort(a.begin(), a.end());
    if (a[2] == x or a[2] == y) cout << "YES\n";
    else cout << "NO\n";
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}



