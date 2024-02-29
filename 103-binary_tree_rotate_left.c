#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree node
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Pointer to the new root node after the rotation
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	tree->parent = tree->right;

	if (tree->right)
	{
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->parent->parent = NULL;

		if (tree->right)
			tree->right->parent = tree;

		return (tree->parent);
	}

	return (tree);
}
