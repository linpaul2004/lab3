# lab3
Compilation:<br>
make

when size = 1000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.02 seconds
v1/v2 are the same.

when size = 10000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.26 seconds
v1/v2 are the same.

when size = 100000
sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 128.03 seconds
v1/v2 are the same.

In the worst case(data is sorted in descending order), the insertion sort needs n(n-1)/2 times of operation,
but the quicksort only needs n*logn times of operation, therefore the quicksort is much faster.
