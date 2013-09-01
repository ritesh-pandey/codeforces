#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	if(m <= k){
		cout<<"0\n";
		return 0;
	}
	else{
		int sum = 0;
		for(int i=n-1; i>=n-k; i--){
			sum += a[i];
		//	cout<<k-n+i;
			if( (sum+k-n+i) >= m){
				cout<<(n-i)<<"\n";
				return 0;
			}
		}
		cout<<"-1\n";
	}
	return 0;
}
