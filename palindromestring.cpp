#include<iostream>
using namespace std;
void ispalindrome(char str[])
{
	int start=0;
	int end = strlen(str)-1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			printf("\n String %s is not a palindrome",str);
			return;
		}
		start++;
		end--;
	}
	printf("\n String %s is a palindrome",str);
}
int main()
{
	ispalindrome("malayalam");
	ispalindrome("madam");


}
