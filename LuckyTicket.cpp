# include<iostream>
# include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	string num;
	cin>>num;
	int flag = 0;
	for(int i=0; i<num.size(); i++){
		if(num[i] == '4' || num[i] == '7')
			continue;
		else
			flag = 1;
	}
	if(flag == 1){
		cout<<"NO\n";
		return 0;
	}
	int lsum=0,rsum=0;
	for(int i=0; i<n/2; i++){
		lsum += (num[i]-'0');
		rsum += (num[n-1-i]-'0');
	}
	if(lsum == rsum)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
