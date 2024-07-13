#include <stdio.h>
#include <string.h>

int question_about_Alice()
{
	char neirone[16];
	printf("What you think about neirone-system Alice?\n");
	scanf("%16s", neirone);
	if (strcmp(neirone, "Nice") == 0)
	{
		printf("Ok, i'd like Alice!\n");
		return 0;
	}
	if (strcmp(neirone, "nice") == 0)
	{
		printf("Ok, i'd like Alice!\n");
		return 0;
	}
	if (strcmp(neirone, "NICE") == 0)
	{
		printf("Ok, i'd like Alice!\n");
		return 0;
	}
	else return question_about_Alice();
}

int question_about_hair()
{
	char hair[16];
	printf("What you think about my new hair?\n");
	scanf("%16s", hair);
	if (strcmp(hair, "Nice") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	if (strcmp(hair, "nice") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	if (strcmp(hair, "NICE") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	else return question_about_hair();
}

int start_chat()
{
	char hello[16];
	printf("Hello my friend!\n");
	scanf("%16s", hello);
	if (strcmp(hello,"Hello") == 0)
	{
		return 0;
	}
	if (strcmp(hello,"hello") == 0)
	{
		return 0;
	}
	if (strcmp(hello,"HELLO") == 0)
	{
		return 0;
	}
	else return start_chat();
}

int main()
{
	start_chat();
	question_about_hair();
	question_about_Alice();
	return 0;
}
