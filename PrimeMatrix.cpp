#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> prime(110000,1);
	prime[0] = 0;
	prime[1] = 0;
	for(int i=2; i<110000; i++){
		if(prime[i] == 0)
			continue;
		for(int j=i*2; j<110000; j+=i)
			prime[j] = 0;
	}
	
	int n,m;
	cin>>n>>m;
	vector< vector<int> > mat(n, vector<int>(m));  
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>mat[i][j];
	
	long long int minmoves=110000,moves = 0;
	for(int i=0; i<n; i++){
		moves = 0;
		for(int j=0; j<m; j++){
			if(prime[mat[i][j]] == 1)
				continue;
			else{
				int k=mat[i][j];
				while(prime[k] != 1)
					k++;
				moves += (k-mat[i][j]);
			}
		}
		if(minmoves > moves)
			minmoves = moves;
	}
	for(int i=0; i<m; i++){
		moves = 0;
		for(int j=0; j<n; j++){
			if(prime[mat[j][i]] == 1)
				continue;
			else{
				int k=mat[j][i];
				while(prime[k] != 1)
					k++;
				moves += (k-mat[j][i]);
			}
		}
		if(minmoves > moves)
			minmoves = moves;
	}	
	cout<<minmoves<<"\n";
	return 0;
}
