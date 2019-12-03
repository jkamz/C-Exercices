#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int i, rot;
	
	rot = 13;
	
	char text_original[] = "HOW NASTY IS YOUR ALGO";
	int len = strlen(text_original);
	char *encoded_text = malloc(sizeof(char)*(len +1));
	
	// Encode
	
	for(i = 0; i<len; i++)
	{
		if(isalpha(text_original[i]))
			encoded_text[i] = (toupper(text_original[i]) - 'A' + rot) % 26 + 'A';
		else
			encoded_text[i] = text_original[i];
	}
	
	encoded_text[i] = 0;
	 
	
	// Decode
	char *text_decoded = malloc(sizeof(char)*(len + 1));
	
	for(i = 0; i<len; i++)
	{
		if(isalpha(text_original[i]))
			text_decoded[i] = (toupper(encoded_text[i]) - 'A' + 26 - rot) % 26 + 'A';
		else
			text_decoded[i] = encoded_text[i];
	}
	
	text_decoded[i] = 0;
	
	printf("%s\n%s\n%s\n", text_original, encoded_text, text_decoded);
}
