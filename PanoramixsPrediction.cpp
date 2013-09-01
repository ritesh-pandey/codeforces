# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector <int> prime(51,1);
	prime[0] = prime[1] = 0;
	for(int i=2; i<51; i++){
		if(prime[i] != 1)
			continue;
		for(int j=i+1; j<51; j++){
			if(j%i == 0)
				prime[j] = 0;
		}
	}
	int flag = 0;
	for(int i=n+1; i<=m; i++){
		if(prime[i] == 1 && i == m){
			cout<<"YES\n";
			flag = 1;
			break;
		}
		if(prime[i] == 1 && i != m){
			cout<<"NO\n";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout<<"NO\n";
	return 0;
}
