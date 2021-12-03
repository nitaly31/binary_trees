#include "binary_trees.h"
/**
 * array_to_bst - function that finds the sibling of a node
 *
 * @tree: tree
 * @value: max
 * Return: Return the height of the tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *bst = NULL;

	if (!array || size == 0)
		return (NULL);
	bst = bst_insert(&bst, array[0]);
	for (i = 0; i < size; i++)
		bst_insert(&bst, array[i]);
	return (bst);
}
