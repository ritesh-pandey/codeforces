#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	if(k>n){
		cout<<"-1\n";
		return 0;
	}
	cout<<a[n-k]<<" 0\n";
	return 0;
}
