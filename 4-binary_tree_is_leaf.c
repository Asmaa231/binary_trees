#include"binary_trees.h"
#include<stdlib.h>
/**
*binary_tree_is_leaf -  checks if a given node is a leaf
*@node:  a pointer to the node to check
*Return: 1 if node leaf otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	/*smarter sol is to check if node left or node right or node null ret 0 */
	/*else ret 1*/
	if (!node->left && !node->right)
	{
		return (1);
	}
	return (0);
}
