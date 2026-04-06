page 438-447

# Searching Notes

## 14.1: Intro
- Searching: to find whether a particular value is present in an array or not
- Successful search: value is found, give the location of the value
- Unsuccessful search: value is not found, display proper message

## 14.2: Linear Search
- AKA sequential search
- Compare the value with every element of the array one by one in a sequence until a match is found
- Mostly used for unordered arrays
- Executes in O(n) time
- Best case when element is close to the front
- Worst case when element is close to the back or not present
- Performance can be improved with a sorted array

## 14.3: Binary Search
- Used for sorted arrays
- Repeatedly cut the list in half and compare to the middle value
	- If VAL < A[MID], then VAL will be present in the left segment of the array. So, the value of END will be changed as END = MID – 1
	- If VAL > A[MID], then VAL will be present in the right segment of the array. So, the value of BEG will be changed as BEG = MID + 1
- If VAL is not present in the array, then eventually, END will be less than BEG, so the algorithm will terminate and declare the search unsuccessful
- The complexity of a binary search is $log_2(n) $
- The complexity of the algorithm is calculated depending on the number of comparisons that are made

## 14.4: Interpolation Search
- AKA extrapolation search
- Used for sorted arrays
- A guess is made on where to find the value by looking at the value of the bounds
- When the guess matches the value, the search is complete
- If the values aren’t equal, the search space is reduced to the part before or after the estimated position depending on if it was higher or lower
- The average complexity is $log(logn)$
- The worst case complexity is $O(n)$

## 14.5: Jump Search
- AKA block search
- Used for sorted arrays
- Check an element, and if it is less than the desired value, then jump ahead some amount of elements. Check the new element, and if the new element is greater than the desired value, then you have two boundaries and perform a linear search between them. If the new element is less than the desired value, make another jump and repeat the process
- Better than linear for sorted lists because it can find the value in less iterations
- Better than binary when jumping back is slower than jumping forward because it only requires moving backwards once
- Step length $k$ is usually $\sqrt{n}$
- Jump searches can start from somewhere middle in the list rather than from the beginning to optimize performance
- The complexity is $O(\sqrt{n})$
