# include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int c = 1;
	int cash = 0;
	int lh = -1,lm = -1;
	while(n--){
		int h,m;
		cin>>h>>m;
		if(h == lh && m == lm)
			c++;
		else{
			if(cash < c)
				cash = c;
			c = 1;
		}
		lh = h;
		lm = m;
	}
	if(cash < c)
		cash = c;
	cout<<cash<<"\n";
	return 0;
}
