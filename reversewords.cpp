#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
void reverseString(char*,int start,int end);
int main()
{
	int start,end,length;
	char str[] = "piglet quantum";
	start = end = 0;
	length = strlen(str);
	reverseString(str,start,length-1);
	printf("\n The reversed string is %s",str);
	while(end<length)
	{
		if(str[end]!=' ')
		{
			// Save the starting position of word - save it in start
			start = end;
			// Traverse till end of word
			while(end<length && str[end]!=' ')
				end++;
			end--;
			reverseString(str,start,end);
		}
		// Advance to next token if str[end] is blank
		end++;
	}
	printf("\n The final string with reversed words in string is %s",str);
}
void reverseString(char *str,int start,int end)
{
	// Switch char[start] with char[end] while start<end
	char temp;
	while(start<end)
	{
		temp = 	str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
