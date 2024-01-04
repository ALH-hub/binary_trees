#include "binary_trees.h"

/**
 * binary_tree_node - create a node of a binary tree
 * @parent: the parent node of the node to create
 * @value: the value the new node contains
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	node->n = value;

	return (node);
}
