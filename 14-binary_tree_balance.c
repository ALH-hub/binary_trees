#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_balance - calculate balance factore of binary tree
 * @tree: the tree concerned
 * Return: the balance factor, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: the tree concerned
 * Return: the height of the binary tree, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? binary_tree_height(tree->left) + 1 : 1;
	height_r = tree->right ? binary_tree_height(tree->right) + 1 : 1;

	return (height_l > height_r ? height_l : height_r);
}
