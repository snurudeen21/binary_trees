#include "
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    /* Base case: If tree is NULL, return 0 */
    if (tree == NULL) {
        return 0;
    }

    /* Recursive case: Count nodes with at least one child */
    size_t count = 0;
    if (tree->left != NULL || tree->right != NULL) {
        count = 1;
    }
    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

    return count;
}
