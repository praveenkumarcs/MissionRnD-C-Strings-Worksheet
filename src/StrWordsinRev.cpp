/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void stringcpy(char *str, int i, int j){
	char tmp;

	while (i <= j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}

}

void str_words_in_rev(char *input, int len){
	int i, j;
	char *input1, tmp;

	i = 0;
	j = len - 1;
	input1 = input;
	while (i <= j) {
		tmp = input[i];
		input1[i] = input1[j];
		input[j] = tmp;
		i++;
		j--;
	}

	i = 0;
	j = 0;
	while (input1[i] != '\0'){
		while (input1[j] != ' ' && input1[j] != '\0')
			j++;

		stringcpy(input1, i, j - 1);
		while (input1[j] == ' '&& input1[j] != '\0')
			j++;

		i = j;


	}


}


