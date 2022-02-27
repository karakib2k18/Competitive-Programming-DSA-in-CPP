//Problem link:  https://codeforces.com/problemset/problem/1557/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    double single_value,other_value, sum=0;
    for(int i=0; i<n; ++i){
	    for(int i=0; i<n; ++i){
    	single_value = arr[i]; //3
	    	sum +=arr[i];
	    }
	    other_value = (sum - single_value);
    }
    cout<< single_value << " " <<other_value;
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
