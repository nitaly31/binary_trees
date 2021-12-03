#include "binary_trees.h"
/**
 * recursion_bst - function that finds the sibling of a node
 *
 * @root: Pointer to the tree
 * @min_left: min
 * @max_right: max
 * Return: Return the height of the tree
 */
int recursion_bst(const binary_tree_t *root,
		const binary_tree_t *min_left, const binary_tree_t *max_right)
{
	if (root == NULL)
		return (1);
	if (min_left != NULL && root->n <= min_left->n)
		return (0);
	if (max_right != NULL && root->n >= max_right->n)
		return (0);
	return (recursion_bst(root->left, min_left, root) &&
			recursion_bst(root->right, root, max_right));
}
/**
 * binary_tree_is_bst - function that finds the sibling of a node
 *
 * @tree: Pointer to the tree
 * Return: Return the height of the tree
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursion_bst(tree, NULL, NULL));
}
