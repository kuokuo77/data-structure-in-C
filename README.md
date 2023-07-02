# data-structure-in-C
as title

### Heap
for customized usage, just to modify the type of array from int to struct node, etc.
eg. 
````C
typedef struct node{
    int val;
}node

node *heap = (node*)malloc(size*typeof(node));
// node stored in heap
````
