/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void copystr(char *ptr, long long  num, int afterdecimal){
	int i, j, rem, len = 0, len1 = 0;
	long long revnum = 0, tmp;

	if (num < 0){
		num *= -1;
		*ptr++ = '-';
	}
	tmp = num;


	while (tmp != 0){
		rem = tmp % 10;
		revnum = revnum * 10 + rem;
		
		tmp /= 10;
		len += 1;
	}


	while (revnum != 0){

		if (len1 == (len - afterdecimal))
			*ptr++ = 46;

		rem = revnum % 10;
		*ptr++ = 48 + rem;
		revnum /= 10;
		len1 += 1;
	}

	*ptr = '\0';
}





void number_to_str(float number, char *str, int afterdecimal){

	int i, j;

	long long num;

	for (i = 1; i <= afterdecimal; i++)
		number *= 10;

	num = number;

	copystr(str, num, afterdecimal);




}




