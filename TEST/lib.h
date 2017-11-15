#pragma once

#define MAXSURNAME 11 //max length for surname


//Structure of contacts

typedef struct
{
	char surname[MAXSURNAME];
	char name[MAXSURNAME];
	int phone_number;
} the_contact_t;

//List of commands

enum commands {
	Exit,
	Enter_date,
	Edit_date,
	Delete_date,
	Find_date,
	Print_date,
	Call_phone_number
};

//For calls

enum call {
	Exit_from_call,
	Call_by_name,
	Call_by_number
};

//Finding menu

enum finding {
	Exit_from_finding,
	Find_by_surname,
	Find_by_phone_number
};

//Read contacts from file function

the_contact_t* read_from_file(uint64_t* size_array);

//Write contacts to file

the_contact_t* write_to_file(the_contact_t* a, uint64_t* size_array);

//Enter personal data of contacts

the_contact_t* enter_date(the_contact_t* a, uint64_t* size_array);

//Print contacts data function

void* print_struct(the_contact_t* a, uint64_t* size_array);

//Edit contact information

void* edit_contact(the_contact_t* a, uint64_t* size_array);

//Finding contact

the_contact_t* find_contact(the_contact_t* a, uint64_t* size_array);

//For delete contact

the_contact_t* delete_date(the_contact_t* a, uint64_t* size_array);

//Call function

void* call_number(the_contact_t* a, uint64_t* size_array);

