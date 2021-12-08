/*Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
void CommonBits(UINT iNo1, UINT iNo2)
{
// Logic
}
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	UINT iResult=0x00000000;
	iResult=iNo1&iNo2;
	cout<<"Common on bits in both numbers are:\n ";
	for(int i=1; i<=32; i++)
	{
		if((iResult&1)==1)
			cout<<i<<"\t";
		iResult=iResult>>1;
	}
}
		

int main()
{
	UINT iNo1, iNo2;
	cout<<"Enter the first number: ";
	cin>>iNo1;
	cout<<"Enter the second number: ";
	cin>>iNo2;
	CommonBits(iNo1,iNo2);
	return 0;
}
	