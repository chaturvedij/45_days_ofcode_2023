#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	     int a1,a2,a3,a4,a5,p;
	    cin>>a1>>a2>>a3>>a4>>a5>>p;
	    int sum=p*(a1+a2+a3+a4+a5);
	    if(sum<=120){
	        cout<<"No"<<endl;
	    }
	    else{
	    cout<<"Yes"<<endl;
	}
	}
	return 0;
}
