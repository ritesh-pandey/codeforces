# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	for(int i=0; i<n; i++){
		int a,b;
		vector <int> dice(7,1);
		cin>>a>>b;
		dice[a] = dice[7-a] = dice[b] = dice[7-b] = 0;
		if(dice[x] == 0){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}
