# data-structure-in-C
as title

### Heap
for customized usage, just to modify the type of array from int to struct node, etc.
eg. 
````C
typedef struct node{
    int val;
}node

node *heap = (node*)malloc(size*sizeof(node));
// node stored in heap
````
don't forget to use ``heap[i]->val`` instead of ``heap[i]``
