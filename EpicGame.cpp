# include<iostream>

using namespace std;

int gcd(int m, int n){
	if(m<n){
		int t=m;
		m=n;
		n=t;
	}
	if(m%n == 0){
		return n;
	}		
	gcd(n,m%n);
}

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int turn = 0;
	while(true){
		//cout<<"turn "<<turn<<" n "<<n<<"\n";		
		if(turn%2 == 0){
			n -= gcd(n,a);
		}
		else{
			n -= gcd(n,b);
		}
		if(n>0)
			turn++;
		else{
			if(turn%2 == 0){
				cout<<"0\n";
				break;
			}
			else{
				cout<<"1\n";
				break;
			}
		}
	}	
	return 0;
}
