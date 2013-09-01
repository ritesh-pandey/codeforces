# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	int square[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>square[i][j];
		}
	}
	vector <int> colsum(n,0);
	vector <int> rowsum(n,0);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			rowsum[i] += square[i][j];
			colsum[j] += square[i][j];
		}
	}
	sort(colsum.begin(), colsum.end());
	sort(rowsum.begin(), rowsum.end());
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(colsum[i] > rowsum[j])
				count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}
