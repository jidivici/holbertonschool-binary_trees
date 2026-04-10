#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);
}
