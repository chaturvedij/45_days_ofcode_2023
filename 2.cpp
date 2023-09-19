#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z,k;
	    cin>>x>>y>>z;
	    
	    k=5*x+10*y;
	    cout<<(k/z)<<endl;
	}
	return 0;
}
