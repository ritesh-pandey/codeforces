# include<iostream>
# include<algorithm>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> to(n);
	vector <int> fro(n);
	for(int i=0; i<(2*n); i++){
		if(i<n){
			char c;
			cin>>c;
			to[i] = c-'0';
		}
		else{
			char c;
			cin>>c;
			fro[i-n] = c-'0';
		}
	}
	sort(to.begin(), to.end());
	sort(fro.begin(), fro.end());
	if(to[0] > fro[0]){
		int flag = 0;
		for(int i=0; i<n; i++){
			if(to[i] <= fro[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	else if(to[0] < fro[0]){
		int flag = 0;
		for(int i=0; i<n; i++){
			if(to[i] >= fro[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}
