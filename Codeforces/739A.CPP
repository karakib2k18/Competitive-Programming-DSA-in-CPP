/*

#Connect with me

LinkedIn: https://www.linkedin.com/in/karakib2k18/
Facebook: https://www.facebook.com/karakib2k18
Codeforces: https://codeforces.com/profile/karakib2k18
Instragram: https://www.instagram.com/kazi_abdur_rakib/
Github: https://github.com/karakib2k18
Portfolio: https://kaziabdurrakib.netlify.app/

*/
// https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

void solve(){
	int k;
	cin>>k;
	for(int i=1; i<N; ++i){
		if((i%3==0) || (i%10==3)){
			continue;
		}else{
			k--;
			if(k==0){
			cout<< i <<endl;				
			}

		}
	}
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}