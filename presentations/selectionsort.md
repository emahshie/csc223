# Selection Sort
## Brief Summary
- Find the smallest value in the array and swap it with element in the first position, find the second smallest and swap it with element in the second position,...
- Has a complexity of $O(n^2)$, making it inefficient for large lists
- Advantages: simple, easy to implement, fine for small data sets, more efficient than a bubble sort

Code:
```
selsort(items, count)
int items[];
int count;
{
    int i, j, min, temp;
    for (i = 0; i < count - 1; i++) {
        min = i;
        for (j = i + 1; j < count; j++) {
            if (items[j] < items[min]) min = j;
        }
        temp = items[min];
        items[min] = items[i];
        items[i] = temp;
    }
}
```