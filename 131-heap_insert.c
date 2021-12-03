#include "binary_trees.h"
/**
 * create_node - function that finds the sibling of a node
 *
 * @parent: val
 * @value: val
 * Return: Return the height of the tree
 */
heap_t *create_node(heap_t *parent, int value)
{
	heap_t *new_node = NULL;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
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
 * bubble_up - function that finds the sibling of a node
 *
 * @node: val
 * Return: Return the height of the tree
 */
heap_t *bubble_up(heap_t *node)
{
	int *temp;
	heap_t *parent;

	if (!node)
		return (NULL);
	parent = node->parent;
	while (parent && parent->n < node->n)
	{
		temp = parent->n;
		parent->n = node->n;
		node->n = temp;
		node = parent;
		parent = parent->parent;
	}
	return (node);
}
/**
 * insert_node - function that finds the sibling of a node
 *
 * @root: val
 * @size: size
 * @index: index
 * @pind: pind
 * @value: val
 * Return: Return the height of the tree
 */
heap_t *insert_node(heap_t *root, int size, int index, int pind, int value)
{
	heap_t *left = NULL, *right = NULL, *new_node;

	if (!root || index > pind)
		return (NULL);
	if (index == pind)
	{
		new_node = create_node(root, value);
		if (!root->left)
			root->left = new_node;
		else
			root->right = new_node;
		return (bubble_up(new_node));
	}
	left = insert_node(root->left, size, index * 2 + 1, pind, value);
	if (left)
		return (left);
	right = insert_node(root->right, size, index * 2 + 2, pind, value);
	if (right)
		return (right);
	return (NULL);
}
/**
 * heap_insert - function that finds the sibling of a node
 *
 * @root: val
 * @value: val
 * Return: Return the height of the tree
 */
heap_t *heap_insert(heap_t **root, int value)
{
	int nodes, pind = 0;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = create_node(NULL, value));
	nodes = count_nodes(*root);
	pind = (nodes - 1) / 2;

	return (insert_node(*root, nodes, 0, pind, value));
}
