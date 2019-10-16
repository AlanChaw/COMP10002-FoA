/* Example program to illustrate linked list operations.
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int data_t;
#include "listops.c"

int
main(int argc, char *argv[]) {
	list_t *list;
	int i;
	list = make_empty_list();
	while (scanf("%d", &i) == 1) {
		list = insert_at_head(list, i);
		list = insert_at_head(list, i+1);
		list = insert_at_foot(list, i+2);
	}
	while (!is_empty_list(list)) {
		i = get_head(list);
		printf("%d ", i);
		list = get_tail(list);
	}
	printf("\n");
	free_list(list);
	list = NULL;
	return 0;
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
