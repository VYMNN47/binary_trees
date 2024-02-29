#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current;

	if (!tree)
		return (NULL);
	current = *tree;

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
				return (current->right);
			}
			else
			{
				current = current->right;
			}
		}
		else
		{
			return (NULL);
		}
	}
	*tree = (binary_tree_node(current, value));
	return (*tree);
}
