#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder binary tree traversal
 * @tree: the tree to traverse
 * @func: the function used in the traversal
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
