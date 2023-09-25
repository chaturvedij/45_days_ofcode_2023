#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int  x,y;
	    cin>>x>>y;
	    if(x<2*y)
	    {
	        std::cout << "0" << std::endl;
	    }
	    
	    else
	    {
	        std::cout << x/(2*y) << std::endl;
	    }
	}
	return 0;
}
