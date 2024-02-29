#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size)
{
	size_t n;
	bst_t *root;

	root = NULL;

	if (!array || !size)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		bst_insert(&root, array[n]);
	}

	return (root);
}
