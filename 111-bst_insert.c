#include "binary_trees.h"

bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return NULL;

	bst_t *current = *tree;

	while (current)
	{
		if (value < current->n)
		{
			if (!current->left)
			{
				current->left = (binary_tree_node(current, value));
				return (current->left);
			}

			else
			{
				current = current->left;
			}
		}
		else if (value > current->n)
		{
			if (!current->right)
			{
				current->right = (binary_tree_node(current, value));
				return current->right;
			}
			else
			{
				current = current->right;
			}
		}
		else
		{
			return NULL;
		}
	}

	*tree = (binary_tree_node(current, value));
	return *tree;
}
