#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
=======
 * main - check the code for
>>>>>>> 405457ed246015ef04dc175ac0309cccc74c75a5
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
