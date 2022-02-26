#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d,e,f;
    cin >> a >> b>>c>>d>>e>>f;
    if( ((b==d) && f<d) || ((d==f) && b<f) || ((f==b) && d<b) ){
    	if(b==d) cout<< abs(a-c) <<endl;
    	else if(d==f) cout<< abs(c-e) <<endl;
    	else cout<< abs(e-a) <<endl;
    }
    else cout << 0 <<endl;

}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}