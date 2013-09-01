# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector <int> team(n,0);
	for(int i=0; i<n; i++){
		int p,t;
		cin>>p>>t;
		t = 50-t;
		team[i] = (p*100) + t;
	}
	sort(team.begin(), team.end());
	int i = n-k+1;
	int count = 1;
	while(team[i] == team[n-k] && i<n){
		count++;
		i++;
	}
	i = n-k-1;
	while(team[i] == team[n-k] && i>=0){
		count++;
		i--;
	}
	cout<<count<<"\n";
	return 0;
}
