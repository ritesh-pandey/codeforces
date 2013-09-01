# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

int index(vector <long int>a, long int b){
	for(int i=0; i<a.size(); i++){
		if(a[i] == b)
			return i;
	}
}

int main(){
	int n;
	cin>>n;
	vector <long int> town(n);
	for(int i=0; i<n; i++){
		cin>>town[i];
	}
	vector <long int> time(town);
	sort(time.begin(), time.end());
	if(time[0] == time[1])
		cout<<"Still Rozdil\n";
	else{
		int indx = index(town,time[0]);
		cout<<indx+1<<"\n";
	}
	return 0;
}
