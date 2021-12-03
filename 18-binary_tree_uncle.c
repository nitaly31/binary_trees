#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: Pointer to the tree
 * Return: Return the height of the tree
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if ((node->parent->parent->left) && (node->parent->parent->left) !=
		   node->parent)
		return (node->parent->parent->left);
	else if ((node->parent->parent->right) && (node->parent->parent->right) !=
		   node->parent)
		return (node->parent->parent->right);
	return (node);
}
