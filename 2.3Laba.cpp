#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	char str[222];
	int c[26];
	int num = 0;
	gets_s(str);
	for (int i = 0; i < 26; i++)
		c[i] = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isupper (str[i]))
		str[i] = tolower(str[i]);
	}

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			num = str[i] - 'a';
			c[num] ++;
		}
			
	}
	for (int i = 0; i < 26; i++)
	{
		if (c[i] > 1)
			printf("%c - %u\n", 'a' + i, c[i]); //
	}

	system("pause");
	return 0;
}