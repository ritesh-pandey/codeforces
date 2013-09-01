# include<iostream>
# include<vector>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector <int> lFreq(1001,0);
	for(int i=0; i<N; i++){
		int l;
		cin>>l;
		lFreq[l]++;
	}
	int large = 0,number = 0;
	for(int i=0; i<1001; i++){
		if(large < lFreq[i])
			large = lFreq[i];
		if(lFreq[i] > 0)
			number++;
	}
	cout<<large<<" "<<number<<"\n";
	return 0;
}
