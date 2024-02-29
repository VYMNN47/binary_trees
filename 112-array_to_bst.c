#include "binary_trees.h"

/**
 * array_to_bst - Converts an array to a binary search tree
 * @array: Pointer to the array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the root of the binary search tree, or NULL if the
 *         array is NULL or empty.
 */

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
