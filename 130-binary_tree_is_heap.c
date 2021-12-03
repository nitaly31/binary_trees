#include "binary_trees.h"
/**
 * count_nodes - function that finds the sibling of a node
 *
 * @root: val
 * Return: Return the height of the tree
 */
int count_nodes(binary_tree_t *root)
{
	if (!root)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}
/**
 * is_max_heap - function that finds the sibling of a node
 *
 * @root: tree
 * @index: max
 * @n: val
 * Return: Return the height of the tree
 */
int is_max_heap(binary_tree_t *root, int index, int n)
{
	if (!root)
		return (0);
	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if ((root->left && root->left->n > root->n) ||
			(root->right && root->right->n > root->n))
		return (0);
	if (root->left && !root->right)
		return (is_max_heap(root->left, index * 2 + 1, n));
	return (is_max_heap(root->left, index * 2 + 1, n) &&
			is_max_heap(root->right, index * 2 + 2, n));
}
/**
 * binary_tree_is_heap - function that finds the sibling of a node
 *
 * @tree: tree
 * Return: Return the height of the tree
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int nodes;
	binary_tree_t *root = NULL;

	if (!tree)
		return (0);
	root = (binary_tree_t *)tree;
	nodes = count_nodes(root);
	return (is_max_heap(root, 0, nodes));
}
