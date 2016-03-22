/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/
#include <stdio.h>
#include <malloc.h>

#define SIZE 31

int stringlen(char *str){
	int len = 0;
	while (*str++ != '\0')
		len++;
	return len;
}




void stringcpy(char *dest, char *src){
	while ((*dest++ = *src++) != '\0');
}


int findword(char *word, char *str){

	int i, j, wordlen = 0, strlen = 0;

	if (!stringlen(word))
		return 0;


	wordlen = stringlen(word);
	strlen = stringlen(str);


	for (i = 0; i <= strlen - wordlen; i++){
		for (j = 0; j < wordlen; j++){
			if (str[i + j] != word[j])
				break;

		}
		if (j == wordlen)
			return 1;
	}
	return 0;
}

int wordcount(char *str){
	int words = 0;

	while (*str == ' ')
		str++;

	while (*str != '\0'){
		while (*str != ' ' && *str != '\0')
			str++;
		while (*str == ' ')
			str++;
		words += 1;
		if (*str == '\0')
			return words;
	}

	return words;

}

char ** commonWords(char *str1, char *str2) {
	char *ptr, *ptr1, tmp[32], **res = NULL, **tmpres = NULL;
	int i = 0, j = 0, flag = 0;
	ptr = str1;


	if (str1 == NULL || str2 == NULL)
		return NULL;

	res = (char **)malloc(wordcount(str2)*sizeof(char *));
	tmpres = res;


	while (*ptr == ' ')ptr++;

	while (*ptr != '\0'){
		i = 0;
		while (*ptr != ' ' && *ptr != '\0')
			tmp[i++] = *ptr++;
		tmp[i] = '\0';
		printf("each word %s\n", tmp);

		if (findword(tmp, str2)){
			ptr1 = (char *)malloc((stringlen(tmp) + 1)*sizeof(char));
			stringcpy(ptr1, tmp);
			*tmpres++ = ptr1;
			flag = 1;
		}
		while (*ptr == ' ')ptr++;
	}
	if (flag == 0)
		return NULL;


	return res;

}





















