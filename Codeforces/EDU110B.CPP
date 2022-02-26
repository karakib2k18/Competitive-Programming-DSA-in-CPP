/*

#Connect with me

LinkedIn: https://www.linkedin.com/in/karakib2k18/
Facebook: https://www.facebook.com/karakib2k18
Codeforces: https://codeforces.com/profile/karakib2k18
Instragram: https://www.instagram.com/kazi_abdur_rakib/
Github: https://github.com/karakib2k18
Portfolio: https://kaziabdurrakib.netlify.app/

*/

//////////////////////////////
// SECOND WAY
//////////////////////////////

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0,ans1=0,x;
    cin >> n;
    vector<int> v1,v2;
    for (int i = 0; i < n; i++) {
    	cin>>x;
    	if(x%2==0) v1.push_back(x);
    	else v2.push_back(x);
    }
    int z = 1;
    for (int i = 0; i < v1.size(); i++) {
    	ans += n-z;
    	z++;
    }
    sort(v2.begin(),v2.end());
    for (int i = 0; i < v2.size(); i++) {
	    for (int j = i+1; j < v2.size(); j++) {
	    	if((__gcd(v2[i],v2[j]*2))>1){
	    		ans1++;
	    	}
	    }
    }
	cout<< ans+ans1 <<endl;
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}

/*
//////////////////////////////////
//FIRST WAY
////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
	    for (int j = i+1; j < n; j++) {
	    	if(a[i]%2==0 || a[j]%2==0 || (__gcd(a[i],a[j]*2))>1){
	    		ans++;
	    	}
	    }
    }
	cout<< ans <<endl;
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}
*/