#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: the tree concerned
 * Return: the height of the binary tree, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	height_l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	height_r = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (height_l > height_r ? height_l : height_r);
}
