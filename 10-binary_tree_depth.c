#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: the tree concerned
 * Return: the depth of node, 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree->parent)
	{
		size += 1 + binary_tree_depth(tree->parent);
	}
	
	return (size);
}
