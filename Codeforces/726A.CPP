/*

#Connect with me

LinkedIn: https://www.linkedin.com/in/karakib2k18/
Facebook: https://www.facebook.com/karakib2k18
Codeforces: https://codeforces.com/profile/karakib2k18
Instragram: https://www.instagram.com/kazi_abdur_rakib/
Github: https://github.com/karakib2k18
Portfolio: https://kaziabdurrakib.netlify.app/

*/

#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1537/A

void solve(){
    int n, ans, sum=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	int x;
    	cin>>x;
    	sum += x;
    }
        	if(sum<n){
    	cout << 1 << endl;
    	}else{
         cout<< sum-n <<endl;; 
    	}
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}