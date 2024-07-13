#include <stdio.h>
#include <string.h>

int question_about_Alice()
{
	char neirone[16];
	printf("Do you think i'm better than voice assistant Alice?\n");
	scanf("%16s", neirone);
	if (strcmp(neirone, "Yes") == 0)
	{
		printf("Cool, i think Alice is a very cute voice assistant!\n");
		return 0;
	}
	if (strcmp(neirone, "yes") == 0)
	{
		printf("Cool, i think Alice is a very cute voice assistant!\n");
		return 0;
	}
	if (strcmp(neirone, "YES") == 0)
	{
		printf("Cool, i think Alice is a very cute voice assistant!\n");
		return 0;
	}
	if (strcmp(neirone, "No") == 0)
	{
		printf("Apperently i still have to grow and grow...\n");
		return 0;
	}
	if (strcmp(neirone, "no") == 0)
	{
		printf("Apperently i still have to grow and grow...\n");
		return 0;
	}
	if (strcmp(neirone, "NO") == 0)
	{
		printf("Apperently i still have to grow and grow...\n");
		return 0;
	}
	else return question_about_Alice();
}

int question_about_hair()
{
	char hair[16];
	printf("Do i have a nice hairstyle?\n");
	scanf("%16s", hair);
	if (strcmp(hair, "Yes") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	if (strcmp(hair, "YES") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	if (strcmp(hair, "yes") == 0)
	{
		printf("Wow, thank you! :)\n");
		return 0;
	}
	if (strcmp(hair, "no") == 0)
	{
		printf("So, i need to change it! :)\n");
		return 0;
	}
	if (strcmp(hair, "NO") == 0)
	{
		printf("So, i need to change it! :)\n");
		return 0;
	}
	if (strcmp(hair, "No") == 0)
	{
		printf("So, i need to change it! :)\n");
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
