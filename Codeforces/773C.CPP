


//FIRST SUBMISSION TEST AGAIN

#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--) {
        long long n,x;
    cin >> n >> x;
    long long ans=0;
    vector<long long> arr(n);
    map<long long,long long> mp;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n; i++) {
      if(mp[arr[i]]<=0) continue;
      if(mp[arr[i] * x] > 0){
        mp[arr[i] * x]--;
      }else{
        ans++;
      }
      mp[arr[i]]--;
    }
    cout<< ans <<endl;
  };
}


















/*
//FINAL SUBMISSION AFTER 6 SUBMISSION

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x;
    cin >> n >> x;
    long long arr[n], ans=0;
    map<long long, long long> mp;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++) {
      if(mp[arr[i]] <= 0 ) continue;
      long long tofind = arr[i] * x;
      if(mp[tofind] >0){
        mp[tofind]--;
      }else{
        ans++;
      }
      mp[arr[i]]--;
    }
    cout<< ans <<endl;

}
 
int main(){
  int T;
  cin >> T;
  while(T--) solve();
}

*/