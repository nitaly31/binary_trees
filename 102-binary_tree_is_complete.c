#include "binary_trees.h"
/**
 * count_nodes - function that finds the sibling of a node
 *
 * @root: Pointer to the tree
 * Return: Return the height of the tree
 */
int count_nodes(binary_tree_t *root)
{
	if (!root)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}
/**
 * is_complete - function that finds the sibling of a node
 *
 * @root: Pointer to the tree
 * @index: index
 * @n: integer
 * Return: Return the height of the tree
 */
int is_complete(binary_tree_t *root, int index, int n)
{
	if (!root)
		return (0);
	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->right && !root->left)
		return (0);
	if (root->left && !root->right)
		return (is_complete(root->left, index * 2 + 1, n));
	return (is_complete(root->left, index * 2 + 1, n) &&
			is_complete(root->right, index * 2 + 2, n));
}
/**
 * binary_tree_is_complete - function that finds the sibling of a node
 *
 * @tree: Pointer to the tree
 * Return: Return the height of the tree
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nodes;
	binary_tree_t *root;

	if (!tree)
		return (0);
	root = (binary_tree_t *)tree;
	nodes = count_nodes(root);
	return (is_complete(root, 0, nodes));
}
