#include <iostream>

using namespace std;

int main(){
	int r1,r2;
	cin>>r1>>r2;
	int c1,c2;
	cin>>c1>>c2;
	int d1,d2;
	cin>>d1>>d2;
	int w = (r1+d1-c2)/2;
	int x = (r1-d1+c2)/2;
	int y = (2*c1-r1-d1+c2)/2;
	int z = (d1-r1+c2)/2;
	if(w!=x && w!=y && w!=z && x!=y && x!=z && y!=z && w>0 && w<10 && x>0 && x<10 && y>0 && y<10 && z>0 && z<10 && w+x==r1 && y+z==r2 && w+y==c1 && x+z==c2 && w+z==d1 && x+y==d2){
		cout<<w<<" "<<x<<"\n";
		cout<<y<<" "<<z<<"\n";
	}
	else
		cout<<"-1\n";
	return 0;
}
