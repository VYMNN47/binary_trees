#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (!tree->parent)
		func(tree->n);
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);

}
