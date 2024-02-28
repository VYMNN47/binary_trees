#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: binary tree
 *
 * Return: returns height of depth tree
 */

size_t max(size_t a, size_t b)
{
        return ((a > b) ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 *
 * Return: returns height of binary tree
 */

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


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	size_t l_height, r_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	 if (!tree->left || !tree->right)
		return (0);

	 left = binary_tree_is_perfect(tree->left);
	 right = binary_tree_is_perfect(tree->right);

	 l_height = binary_tree_height(tree->left);
	 r_height = binary_tree_height(tree->right);

	 if ((left == right) && (l_height == r_height))
		 return (1);

	 return (0);
}
