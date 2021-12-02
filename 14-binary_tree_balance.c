#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_height = balance_height(tree->left);
	right_height = balance_height(tree->right);
	balance = right_height - left_height;
	return (balance);
}

/**
 * balance_height - Measures height of a binary tree recursively.
 * @tree: Pointer to the root of the tree to measure.
 * Return: Height.
 */

size_t balance_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = balance_height(tree->left);
	right_height = balance_height(tree->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
