#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves in a binary tree
 * @tree: the tree concerned
 * Return: the number of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
