/* ********** Details ********** 
Date:	25 March 2020
Source: https://www.hackerrank.com/challenges/tree-preorder-traversal/problem
Key Lessons:

* Use recursive functions
* printf("/d", int) for integers
* printf("/c",' ') for spaces - notice the space is in single quotes while the format specifier is in double-quotes
*************************** */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
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


int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}
