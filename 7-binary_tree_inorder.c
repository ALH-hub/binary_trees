#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder binary tree traversal
 * @tree: the tree to traverse
 * @func: the function used in the traversal
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
