#include "binary_trees.h"
/**
 * remove_child - function that finds the sibling of a node
 *
 * @parent: tree
 * @child: max
 * @val: val
 * Return: Return the height of the tree
 */
bst_t *remove_child(bst_t *parent, bst_t *child, bst_t *val)
{
	if (val)
		val->parent = parent;
	if (parent && parent->left == child)
		parent->left = val;
	else if (parent && parent->right == child)
		parent->right = val;
	free(child);
	if (!parent)
		return (val);
	return (NULL);
}
/**
 * remove_node - function that finds the sibling of a node
 *
 * @root: tree
 * @node: max
 * Return: Return the height of the tree
 */
bst_t *remove_node(bst_t *root, bst_t *node)
{
	bst_t *parent;
	bst_t *ch_left;
	bst_t *ch_right;
	bst_t *curr;
	bst_t *new_root = NULL;

	if (!node)
		return (NULL);
	parent = node->parent;
	ch_left = node->left;
	ch_right = node->right;
	if (!ch_left && !ch_right)
		new_root = remove_child(parent, node, NULL);
	else if (!ch_right)
		new_root = remove_child(parent, node, ch_left);
	else
	{
		curr = ch_right;
		while (curr->left)
			curr = curr->left;
		node->n = curr->n;
		new_root = remove_child(curr->parent, curr, curr->right);
	}
	if (new_root)
		return (new_root);
	if (!parent && !ch_left && !ch_right)
		return (NULL);
	return (root);
}
/**
 * bst_remove - function that finds the sibling of a node
 *
 * @root: tree
 * @value: max
 * Return: Return the height of the tree
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *curr = root;

	if (!root)
		return (NULL);
	while (curr)
	{
		if (value == curr->n)
			return (remove_node(root, curr));
		if (value < curr->n)
			curr = curr->left;
		else
			curr = curr->right;
	}
	return (root);
}
