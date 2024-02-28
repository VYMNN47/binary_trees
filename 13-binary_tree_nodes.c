#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the amount of nodes with atleast 1 child
 * in a binary tree
 * @tree: binary tree
 *
 * Return: returns amount of nodes in tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
                return (0);

	if (tree->left)
		left = binary_tree_nodes(tree->left);

	if (tree->right)
		right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
