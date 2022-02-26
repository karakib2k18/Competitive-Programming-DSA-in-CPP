// https://codeforces.com/contest/1551/problem/A
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    int divide = n/3;
    int modulo = n%3;
    int c1= divide;
    int c2 = divide;
    if(modulo==1) c1++;
    if(modulo==2) c2++;
if((c1 + c2 * 2 == n)){
cout<<c1 <<" "<< c2 <<endl;
}
 
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}