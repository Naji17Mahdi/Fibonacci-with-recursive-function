#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int fibo ( int  );

main ()
{
	int n;
	
	cout<<"please enter n : "<<endl;
	cin>>n;
	cout<<fibo(n);
	
}

int fibo ( int n )
{
	if ( n == 0 )
	{
		return 0;
	}
	else if ( n == 1 )
	{
		return 1;
	}
	else 
	{
		return fibo ( n - 1 ) + fibo ( n - 2 );
	}
}
