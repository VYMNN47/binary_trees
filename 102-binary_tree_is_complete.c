#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree recursively
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	if (tree)
	{
		return (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right) + 1);
	}

	return (0);
}

/**
 * binary_tree_is_complete_rec - Checks if a binary tree is
 * complete recursively
 *
 * @tree: Pointer to the root node of the binary tree
 * @count: Number of nodes in the binary tree
 * @index: Index of the current node
 *
 * Return: 1 if the binary tree is complete, 0 otherwise
 */

int binary_tree_is_complete_rec(const binary_tree_t *tree, size_t count,
		size_t index)

{
	if (tree)
	{
		if (index >= count)
			return (0);
		return (binary_tree_is_complete_rec(tree->left, count, 2 * index + 1)
				&& binary_tree_is_complete_rec(tree->right, count, 2 * index + 2));
	}

	return (1);
}

/**
 * binary_tree_is_complete -  checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if complete, 0 otherwise. If tree is NULL, return 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)

{
	size_t size = binary_tree_size(tree);
	size_t i = 0;

	if (tree)
		return (binary_tree_is_complete_rec(tree, size, i));

	return (0);
}
