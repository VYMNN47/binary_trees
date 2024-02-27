#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (child != NULL)
	{
		child->n = value;
		child->parent = parent;
		child->left = NULL;
		child->right = NULL;
	}

	return (child);
}
