 #include <bits/stdc++.h>
 using namespace std;

int n , m;
set<int> vacant_center;
map<int, vector<int>> to_discharge;

 void discharge_patient_untill_day(int day){
 	for(auto it =to_discharge.begin(); it!=to_discharge.end(); ++it){
 		int discharge_day = it->first;
 		auto &centres = it->second;
 		if(day<discharge_day) break;
 		for(auto center : centres){
 			vacant_center.insert(center);
 		}
 		to_discharge.erase(it);
 	}

 }

 int get_vacant_centre(int patient_index){
 	auto avalable_center_it = vacant_center.lower_bound(patient_index%m);
 	if(avalable_center_it==vacant_center.end()){
 		avalable_center_it==vacant_center.begin();
 	}
 	return *avalable_center_it;
 }



int main(){
	cin>>n >>m;
	vector<pair<int,int>> timings(n);
	vector<int> treated_count(m,0);
	for(int i=0; i<n; ++i){
		cin >> timings[i].first;
	}
	for(int i=0; i<n; ++i){
		cin >> timings[i].second;

	}
	sort(timings.begin(), timings.end());
	for(int i=0; i<m; ++i){
		vacant_center.insert(i);
	}

	for(auto &timing : timings ){
		int arrival_days = timing.first;
		int treatment_days = timing.second;
		discharge_patient_untill_day(arrival_days);
		if(vacant_center.size()==0) continue;
		int patient_index = &timing - &timings[0];
		int avalable_center = get_vacant_centre(patient_index);
		to_discharge[arrival_days+treatment_days].push_back(avalable_center);
		treated_count[avalable_center]++;
		vacant_center.erase(avalable_center);
	}
	for(int i=0; i<m; ++i){
		cout << treated_count[i] << " ";
	}








 }