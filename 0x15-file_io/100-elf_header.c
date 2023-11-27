#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_info(Elf64_Ehdr *header);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

void check_elf(unsigned char *e_ident)
{
	/* Function logic remains the same */
}

void print_info(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	/* Consolidated logic of
	 * print_magic, print_class,
	 * print_data, print_version,
	 * print_osabi, print_abi */
}

void print_type(unsigned int e_type)
{
	/* Function logic remains the same */
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	/* Function logic remains the same */
}

void close_elf(int elf)
{
	/* Function logic remains the same */
}

int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		/* Handle error */
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		/* Handle error */
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		/* Handle error */
	}

	check_elf(header->e_ident);
	print_info(header);
	free(header);
	close_elf(o);

	return (0);
}
