#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
bool arerotations(char *str1,char *str2);
int main()
{
	// Main driver for the program
	char *str1 = "AACD";
	char *str2 = "ADCA";
	if(arerotations(str1,str2))
		cout << "\n Entered strings are rotations of one another";
	else
		cout << "\n Entered strings aren't rotations of one another";
}
bool arerotations(char *str1, char* str2)
{
	// This function returns true if one string is rotation of another
	// Initialize a string with size = 2* size1 + 1 - for null character
	// size1 - length of first string. 
	char *temp;
	int size1, size2;

	size1 = strlen(str1);
	size2 = strlen(str2);

	if(size1 != size2)
		return false;
	else
	{

		// Allocate memory to hold str1.str1
		temp = (char*)calloc(2*size1+1,sizeof(char));
		strcat(temp,str1);
		strcat(temp,str1);

		char * ptr = strstr(temp,str2);
		// strstr returns NULL if second string isn't a substring of FIRST string
		if(ptr != NULL)
		{
			printf("\n second string is substring of first");
			return 1;
		}
		else
			return 0;	
	}
}
