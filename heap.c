#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void heapify(int *a, int i, int size){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    if(l < size && a[l] > a[i]) largest = l;
    else largest = i;
    if(r < size && a[r] > a[largest]) largest = r;
    if(largest != i){
        swap(a, i, largest);
        heapify(a, largest, size);
    }
}

void build(int *a, int size){
    for(int i = (size-1)/2; i >= 0; i--){
        heapify(a, i, size);
    }
}

void print_heap(int *a, int size){
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int heap[10] = {3, 5, 64, 12, 34, 5463, 122, 1, 147435, 38763};
    build(heap, 10);
    print_heap(heap, 10);

    return 0;
}