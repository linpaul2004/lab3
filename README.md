# lab3
Compilation:<br>
make

when size = 1000<br>
sort(): 0 seconds<br>
v1/v2 are different.<br>
insertion_sort(): 0.02 seconds<br>
v1/v2 are the same.<br>
<br>
when size = 10000<br>
sort(): 0 seconds<br>
v1/v2 are different.<br>
insertion_sort(): 1.26 seconds<br>
v1/v2 are the same.<br>
<br>
when size = 100000<br>
sort(): 0.04 seconds<br>
v1/v2 are different.<br>
insertion_sort(): 128.03 seconds<br>
v1/v2 are the same.<br>
<br>
In the worst case(data is sorted in descending order), the insertion sort needs n(n-1)/2 times of operation,<br>
but the quicksort only needs n*logn times of operation, therefore the quicksort is much faster.<br>
