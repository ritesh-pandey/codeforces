# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	vector <int> freq(5001,0);
	for(int i=0; i<n; i++){
		cin>>a[i];
		freq[a[i]]++;
	}
	int count = 0;
	for(int i=1; i<=n; i++){
		if(freq[i] > 0)
			count++;
	}
	cout<<n-count<<"\n";
	return 0;
}
