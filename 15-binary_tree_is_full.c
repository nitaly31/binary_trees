#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: Pointer to the tree
 * Return: Return the height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check_left = 0;
	int check_right = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	check_left = binary_tree_is_full(tree->left);
	check_right = binary_tree_is_full(tree->right);
	return (check_right * check_left);
}
