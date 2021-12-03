#include "binary_trees.h"
/**
 * binary_search_uncle - function that finds the uncle of a node
 *
 * @node: Pointer to the tree
 * Return: Return the height of the tree
 */

binary_tree_t *binary_search_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node || !(node->parent))
		return (NULL);
	uncle = node->parent;
	if ((uncle->left) && (uncle->left) != node)
		return (uncle->left);
	else if ((uncle->right) && (uncle->right) != node)
		return (uncle->right);
	return (NULL);
}
/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: Pointer to the tree
 * Return: Return the height of the tree
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (binary_search_uncle(node->parent));
}
