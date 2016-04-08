/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>


char* removeSpaces(char *str) {

	int firstspacepos = 0;
	int i, j;

	if (str == NULL)
		return '\0';
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == ' ')
			break;
	}
	if (str[i] == '\0')
		return str;
		

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' '){
			firstspacepos = i;
			break;
		}


	for (j = firstspacepos + 1; str[j] != '\0'; j++)
		if (str[j] != ' ')
			str[firstspacepos++] = str[j];
	str[firstspacepos] = '\0';

	return str;
}











