#include<iostream>
using namespace std;
void setbit(int &num,int position)
{
	num |= (1<<position);
}
void unsetbit(int &num, int position)
{
	num &= (~(1<<position));
}
void togglebit(int &num, int position)
{
	num ^= (1<<position);
}
bool findoddeven(int num)
{
	return num & 1; 
}
int main()
{
	// Figure out the number to be shifted
	int num = 5;
	int pos = 1; // The position into which num has to be shifted.
	/*setbit(num,pos);
	cout<<"\n Number with bit set at position is "<<num;
	num = 4;
	unsetbit(num,2);
	cout<<"\n Number with bit unset at position 2 is "<<num;*/
	togglebit(num,1);
	cout<<"\n Number "<<num <<" after toggling bit 1 is "<<num;
	if(findoddeven(num))
		cout<<"\n Number "<<num<<" IS ODD";
	else
		cout<<"\n Number "<<num<<" IS EVEN";
}
