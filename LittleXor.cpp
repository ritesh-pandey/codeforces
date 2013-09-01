# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> X(n);
	for(int i=0; i<n; i++){
		cin>>X[i];
	}
	unsigned long int max = X[0];
	unsigned long int nxor;
	for(int i=0; i<n; i++){
		nxor = X[i];
		for(int j=i; j<n; j++){
			nxor = nxor^X[j];
			if(max < nxor)
				max = nxor;
		}
	}
	cout<<max<<"\n";
	return 0;
}
