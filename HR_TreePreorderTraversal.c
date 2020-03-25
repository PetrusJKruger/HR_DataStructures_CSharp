/* ********** Details ********** 
Date:	25 March 2020
Source: https://www.hackerrank.com/challenges/tree-preorder-traversal/problem
Key Lessons:

* Use recursive functions
* printf("/d", int) for integers
* printf("/c",' ') for spaces - notice the space is in single quotes while the format specifier is in double-quotes
*************************** */


/* add at line 65 */
void preOrder( struct node *root) {
    printf("%d",root->data);
    printf("%c",' ');
    if (root->left != NULL)
    {
        preOrder(root->left);
    }
    if ( root -> right != NULL)
    {
        preOrder(root->right);
    }
}

