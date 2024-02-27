#include "binary_trees.h"

size_t max(size_t a, size_t b)
{
  return (a > b) ? a : b;
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (max(left, right));
}
