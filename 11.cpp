#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	   int a= y/x;
	   if(a<z)
	   {
	       cout<<z-a<<endl;
	   }
	   else
	   {
	       cout<<0<<endl;
	   }
	}
	return 0;
}
