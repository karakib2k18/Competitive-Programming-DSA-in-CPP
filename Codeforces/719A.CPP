// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;
    cin >> n;
    string s;
    cin>>s;
    map<char,int> mp;
    for (int i = 0; i < s.size(); i++) {
    	mp[s[i]]++;
    	char z = s[i];
    	while(s[i]==z){ 
    		i++;
    	}
    	i--;
    	if(mp[z]>1) ans=1;
    }
    cout<< (ans==1 ? "NO" : "YES") <<endl;
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}


/*

#Connect with me

LinkedIn: https://www.linkedin.com/in/karakib2k18/
Facebook: https://www.facebook.com/karakib2k18
Codeforces: https://codeforces.com/profile/karakib2k18
Instragram: https://www.instagram.com/kazi_abdur_rakib/
Github: https://github.com/karakib2k18
Portfolio: https://kaziabdurrakib.netlify.app/

*/