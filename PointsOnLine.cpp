# include<iostream>
# include<vector>
# include<cstdlib>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long int d;
	cin>>d;
	vector <long long int>X(n);
	for(int i=0; i<n; i++){
		cin>>X[i];
	}
	int i,j;
	int points = 0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if((abs(X[j]-X[i]) > d) || (j == n-1))
				break;	
		}
		if((j-i) > 1)
			points += (j-i-1);
	}
	cout<<points<<"\n";
	return 0;
}
