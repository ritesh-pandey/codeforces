# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(101,0);
	for(int i=0; i<n; i++){
		int t;
		cin>>t;
		a[t]++;
	}
	int side = 0;
	for(int i=0; i<101; i++){
		side += (a[i]/2);
	}
	cout<<side/2<<"\n";
	return 0;
}
