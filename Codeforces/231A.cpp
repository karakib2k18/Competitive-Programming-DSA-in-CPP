#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ct =0;
	while(n--){
		int x, y, z;
		cin >> x >> y >> z;
		if (x+y+z >= 2){
			ct++;
		}
	}
	cout<<ct <<endl;

}