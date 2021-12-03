#include "binary_trees.h"
/**
 * bst_search - function that finds the sibling of a node
 *
 * @tree: tree
 * @value: max
 * Return: Return the height of the tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}
