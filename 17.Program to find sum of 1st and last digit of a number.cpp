#include<iostream>
using namespace std;
main()
{
	int number;
	int first,last,sum;
	int rem,rev=0;
	cout<<"Enter the number : ";
	cin>>number;
	last=number%10;
	for( rev=0 ; number!=0 ; number=number/10 )
	{
	rem=number%10;
	rev=rem+(rev*10);
	}
	first=rev%10;
	sum=first+last;
	cout<<"The sum of 1st and last digit is : "<<sum;
	return 0;
}