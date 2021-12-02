#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using
 * post-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: Void.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Postorder (Left, Right, Root) */
	if (tree == NULL || (*func) == NULL)
	{
		return;
	}
	/* first recur on left subtree */
	binary_tree_postorder(tree->left, (*func));
	/* then recur on right subtree */
	binary_tree_postorder(tree->right, (*func));
	/* now deal with the node */
	(*func)(tree->n);
}
