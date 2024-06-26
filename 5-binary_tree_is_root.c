#include "binary_trees.h"
/**
 * binary_tree_is_root - checker for if a node is a root of a binary tree.
 * @node: pntr to the node to check
 * Return: If the node is a root - 1 if not 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
