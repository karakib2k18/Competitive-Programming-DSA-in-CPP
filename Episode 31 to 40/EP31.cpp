#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

unordered_map<char,int> brackets = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}} ;

string isBalance( string s){
	stack<char> st;
	for( char bracket : s){
		if(brackets[bracket]<0){
			st.push(bracket);
		}else{
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(brackets[top]+brackets[bracket] !=0) {
				return "NO";
			}
		}
	}
	if(st.empty()) return "YES";
	else return "NO";
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>> s;
		cout<< isBalance(s)<<endl;
	}
}