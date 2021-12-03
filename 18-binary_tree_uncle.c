#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: Pointer to the tree
 * Return: Return the height of the tree
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = node;

	if (!uncle || !(uncle->parent) || !(uncle->parent->parent))
		return (NULL);
	if ((uncle->parent->parent->left) && (uncle->parent->parent->left) !=
		   node->parent)
		return (uncle->parent->parent->left);
	else if ((uncle->parent->parent->right) && (uncle->parent->parent->right) !=
		   node->parent)
		return (uncle->parent->parent->right);
	return (uncle);
}
