#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include <stdbool.h>
#include<stdarg.h>
#include"lib.h"


int main()
{
	the_contact_t* a = NULL;
	uint64_t size_array = 0;
	a = read_from_file(&size_array);
	uint64_t input = 0;
	do {
		if (a == NULL)
		{
			printf("Not opened\n");
			break;
		}
		printf("Press 0 for Exit\n");
		printf("Press 1 for Enter data\n");
		printf("Press 2 for Edit data\n");
		printf("Press 3 for Delete data\n");
		printf("Press 4 for Find data\n");
		printf("Press 5 for Print data\n");
		printf("Press 6 for Call\n");
		scanf("%lu", &input);
		switch (input) {
		case Enter_date:
			a = enter_date(a, &size_array);
			break;
		case Edit_date:
			edit_contact(a, &size_array);
			break;
		case Delete_date:
			a = delete_date(a, &size_array);
			break;
		case Find_date:
			find_contact(a, &size_array);
			break;
		case Print_date:
			printf("Base yours contacts is:\n");
			print_struct(a, &size_array);
			break;
		case Call_phone_number:
			call_number(a, &size_array);
			break;
		default:
			printf("Repeat your choice");
			break;
		}
	} while (input != Exit);
	write_to_file(a, &size_array);
	free(a);
	return 0;
}