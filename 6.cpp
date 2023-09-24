#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int PA,PB,PC;
	    cin>>PA>>PB>>PC;
	    
	    if(PA+PC>=PB)
	    {
	        cout<<PA+PC;
	    }
	    else{
	        cout<<PB;
	    }
	    cout<<endl;
	}
	return 0;
}
