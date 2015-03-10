#include<iostream>

using namespace std;



int main(void)
{
	int n;
	cin>>n;
	cout<<endl;
	while(1)
	{
		cout<<n<<endl;
		if(n==1)
			return 0;
		else
		{
			if(n%2)
				n=3*n+1;
			else
				n/=2;			
		}
	}
} 
