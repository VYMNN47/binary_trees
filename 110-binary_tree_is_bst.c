#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - Checks if a binary tree is a binary search tree (BST)
 *
 * @tree: Pointer to the root node of the binary tree
 * @min: Minimum value allowed in the tree
 * @max: Maximum value allowed in the tree
 *
 * Return: 1 if the binary tree is a BST, 0 otherwise
 */

int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst(tree->left, min, tree->n - 1) &&
		is_bst(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise. If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX));
}
