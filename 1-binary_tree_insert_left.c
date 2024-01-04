#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert new node on left side of a parent node
 * @parent: the parent node of the new node
 * @value: the value of the new node
 * Return: the new node on success, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
