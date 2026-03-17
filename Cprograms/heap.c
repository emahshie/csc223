#define MAXSIZE 50

int heap[MAXSIZE + 1];
int hsize;

initheap()
{
    hsize = 0;
}

swap(arr, a, b)
int arr[];
int a, b;
{
    int tmp;
    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

insert(val)
int val;
{
    int pos, par;
    if (hsize >= MAXSIZE) {
        printf("Heap is full\n");
        return 0;
    }
    hsize = hsize + 1;
    pos = hsize;
    heap[pos] = val;
    while (pos > 1) {
        par = pos / 2;
        if (heap[pos] <= heap[par]) {
            break;
        }
        swap(heap, pos, par);
        pos = par;
    }
    return 1;
}

delroot()
{
    int last, ptr, left, right;
    if (hsize == 0) {
        printf("Heap is empty\n");
        return -1;
    }
    last = heap[hsize];
    hsize = hsize - 1;
    if (hsize == 0) {
        return last;
    }
    heap[1] = last;
    ptr = 1;
    left = 2;
    right = 3;
    while (left <= hsize) {
        if (heap[ptr] >= heap[left] && heap[ptr] >= heap[right]) {
            break;
        }
        if (right > hsize || heap[left] >= heap[right]) {
            swap(heap, ptr, left);
            ptr = left;
        } else {
            swap(heap, ptr, right);
            ptr = right;
        }
        left = ptr * 2;
        right = left + 1;
    }
    return last;
}


prheap()
{
int i;
int endlevel; 
endlevel = 1;

if (hsize == 0) {
printf("Heap is empty\n");
return 0;
}

printf("\nHeap Structure:\n");
for (i = 1; i <= hsize; i++) {
    printf("%d ", heap[i]);

    if (i == endlevel) {
        printf("\n");
        endlevel = (endlevel * 2) + 1;
    }
    }   
    printf("\nMax (root) = %d\n", heap[1]);
    return 1;
}


main()
{
    int choice, val, removed;
    initheap();
    for (;;) {
        printf("\n1 - Insert\n2 - Remove max\n3 - Display\n4 - Quit\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Value to insert: ");
            scanf("%d", &val);
            insert(val);
            printf("Inserted %d\n", val);
            break;

        case 2:
            removed = delroot();
            if (removed != -1) {
                printf("Removed max: %d\n", removed);
            }
            break;

        case 3:
            prheap();
            break;

        case 4:
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

        if (choice == 4) {
            break;
    }

    }
    return 0;
}


