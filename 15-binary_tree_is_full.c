#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (!node)
                return (0);

        if (!node->left && !node->right)
                return (1);

        return (0);
}



int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;
	
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}