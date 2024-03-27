#include "binary_trees.h"
/**
 * binary_tree_insert_left - funct that inserts a node as a
 * left- child of another in a binary tree.
 * @parent: pointer to node to insert the left-child in.
 * @value: value to store in the new node
 * Return: NULL if an err occurs or pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
	return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
