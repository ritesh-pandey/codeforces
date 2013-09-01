# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <long long int>A(n);
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	if(n == 1 || n == 2){
		cout<<"-1\n";
		return 0;
	}
	for(int i=1; i<n; i++){
		if(A[i] != A[0]){
			if(i == n-1)
				cout<<n-1<<" "<<n<<"\n";
			else
				cout<<"1 "<<i+1<<"\n";
		break;
		}
		if(i == n-1){
			cout<<"-1\n";
		}
	}
	return 0;
}
