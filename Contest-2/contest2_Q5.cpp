#include <bits/stdc++.h>
using namespace std;
int hsh[27];

int main(){
	string s;
	cin >> s;
	for(int i=0; i<s.size(); ++i){
		hsh[s[i]-'a']++;
	}
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		vector<int> unique_char(27,0);
		for(int i=0; i<n; ++i){
			char c;
			cin>>c;
			unique_char[c-'a']=1;
		}
		bool is_odd_present = false;
		int palin_size = 0;
		for(int i=0; i<27; ++i){
			if(unique_char[i]==0) continue;
			int c_ct = hsh[i];
			if(c_ct % 2 == 0){
				palin_size +=c_ct;
			}else{
				palin_size += c_ct -1;
				is_odd_present = true;
			}
		}
		if(is_odd_present) palin_size++;
		cout<< palin_size << endl;
	}


}