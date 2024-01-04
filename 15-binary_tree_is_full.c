#include "binary_trees.h"

int is_full(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: the tree concerned
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (is_full(tree));
	return (0);
}

/**
 * is_full - check if tree is a full tree or not
 * @tree: tree concerned
 * Return: 1 if true, 0 otherwise
 */
int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full(tree->left) == 0 || is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
