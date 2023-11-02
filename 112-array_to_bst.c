#include "binary_trees.h"

/**
 * array_to_bst - constructs a Binary Search Tree from an array
 * @array: pointer to 1st array  element to be converted
 * @size: element count in the array
 * Return: A pointer to the root node of the created BST
 *         NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
