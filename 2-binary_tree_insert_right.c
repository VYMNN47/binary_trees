#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (!parent)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;

	if (parent->right)
	{
		child->right = parent->right;
		parent->right->parent = child;
	}

	parent->right = child;

	return (child);
}
