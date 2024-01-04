#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes in binary tree
 * @tree: the tree concerned
 * Return: number of nodes in tree, 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
