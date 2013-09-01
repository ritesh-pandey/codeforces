# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

int main(){
	int k;
	cin>>k;
	vector <int> a(12);
	int total = 0;
	for(int j=0; j<12; j++){
		cin>>a[j];
		total += a[j];
	}
	if(total < k)
		cout<<"-1\n";
	else{
		sort(a.begin(), a.end());
		int l = 0;
		while(((total-a[l]) >= k) && (l<12)) {
			total -= a[l];
			l++;
		}
		cout<<(12-l)<<"\n";
	}
	return 0;
}
