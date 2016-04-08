/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

int xstrlen(char *ptr){
	int len = 0;
	while (*ptr++ != '\0')
		len++;
	return len;
}





char KthIndexFromEnd(char *str, int K) {

	int slen = 0;

	if (str == nullptr)
		return '\0';

	if ( K < 0)
		return '\0';

	if (xstrlen(str) == 0)
		return '\0';
	

	else{
		slen = xstrlen(str);
		return str[slen - K - 1];
	}
		
	
}