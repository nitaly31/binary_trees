#include "binary_trees.h"
/**
 * bst_insert - function that finds the sibling of a node
 *
 * @tree: tree
 * @value: max
 * Return: Return the height of the tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *prev_parent = NULL;
	bst_t *parent = NULL;
	bst_t *new_node = NULL;

	if (!tree)
		return (NULL);
	prev_parent = NULL;
	parent = *tree;
	while (parent)
	{
		prev_parent = parent;
		if (value == parent->n)
			return (NULL);
		if (value < parent->n)
			parent = parent->left;
		else
			parent = parent->right;
	}
	new_node = binary_tree_node(prev_parent, value);
	if (!prev_parent)
		*tree = new_node;
	else if (value < prev_parent->n)
		prev_parent->left = new_node;
	else
		prev_parent->right = new_node;
	return (new_node);
}
