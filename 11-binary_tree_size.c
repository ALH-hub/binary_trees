#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: the tree to measure the size
 * Return: the size of the binary tree, 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}
