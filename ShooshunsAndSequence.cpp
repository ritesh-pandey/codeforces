# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector <int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int flag = 0;
	for(int i=k; i<n; i++){
		if(a[i] == a[k-1])
			continue;
		else
			flag = 1;
	}
	if(flag == 1){
		cout<<"-1\n";
		return 0;
	}
	int count = 0;
	for(int i=k-2; i>=0; i--){
		if(a[i] == a[k-1]){
			count++;
			continue;
		}
		else
			break;
	}
	cout<<(k-1-count)<<"\n";
	return 0;
}
