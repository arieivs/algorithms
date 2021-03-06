# Sorting Algorithms

There are many well-known sorting algorithms, some easier than others, some faster than others.
I recommend this [sorting algorithms visualisation](https://www.youtube.com/watch?v=ZZuD6iUe3Pc) - I can't get enough of it.
The ideal sorting algorithm will depend on the situation, on your constraints and goals.
Watch [this introduction on sorting algorithms and Big O Notation](https://www.youtube.com/watch?v=RGuJga2Gl_k).
You can find short explanations and resources to further understand how the following sorting algorithms work below.

<br />

## π Bubble Sort
Probably the easiest sorting algorithm to code.
Iterate over the array and compare each element to the next.
If the element is bigger than the following one, swap them.
Go through the array as many times as you need until no more swaps are taking place, which means your array is sorted.

<br />

## π Selection Sort
Iterate over the array.
For each position, scan the array from your position until the end and look for the lowest value.
Swap it with the one at your current location.
Move forward and repeat the process until you reach the end of the array.

<br />

## π Insertion Sort
Iterate over the array and compare each element to the previous one.
If the element is smaller than the one before, swap them.
Then compare the swapped item to all the previous ones and keep on swapping it until itβs in the right position.

<br />

## π Shell Sort
Shell Sort is usually presented as a more efficient version of Insertion Sort.
Watch [this video on the concept of shell sorting](https://www.youtube.com/watch?v=ddeLSDsYVp8).
Instead of comparing each element to another one right next to it, we compare two elements with a certain distance between each other and swap them if necessary.
We then move on comparing every two elements of the array with the same distance between each other.
The gap between the two elements is reduced on each iteration over the array, until it reaches one.
The sequence of intervals used is called gap sequence.

The initial gap (in comparison to the arrayβs length) and the gap sequence influence the time complexity of the algorithm, so we must choose them wisely.
Originally, Donald Shell used half of the arrayβs length as the initial gap and kept dividing it by two.
Hibbard, Knuth, Sedgewick and Marci Ciura are some of the names you might come across while researching on this subject, each one with a gap sequence of their own.

(to be continued...)

<br />

## β±  Quick Sort
Quick Sort is a Divide and Conquer algorithm.
Start by watching [this video on the concept of the quick sort algorithm](https://www.youtube.com/watch?v=WaNLJf8xzC4).

How do we translate this idea into code?

Start by picking a pivot - usually the first or last element of the array is chosen.
Letβs choose the last one.
Create a variable to keep track of the position where the pivot will be inserted later on (weβll get there).
Iterate over the array and compare each element with the pivot.
If the element is smaller than the pivot, move it to the beginning of the array and advance our future pivot index.
Once we reach the end of the array, it will be organised in this way: first all the numbers smaller than the pivot, then all the numbers bigger or equal to the pivot and finally the pivot.
Our future pivot index will be pointing at the first number bigger than the pivot, so all we need to do now is to swap them.
Our array is looking nicer, but we still need to do the same with each of the blocks surrounding the pivot.
For that, we call the function recursively on each sub-array.
Watch [this video on how to code quick sort](https://www.youtube.com/watch?v=eqo2LxRADhU).

<br />

## π Merge Sort
Merge Sort is also a Divide and Conquer algorithm. 
Start with [this introduction to the merge sort algorithm](https://www.youtube.com/watch?v=x_Z9FcAPmbk).

Great, nowβ¦ how do we code this?

First, the array needs to be divided all the way down into single elements.
Then, these elements need to be placed in the right order while being merged.
In order to obtain this behaviour, we need to recursively call the function which divides the array in two, and afterwards call the auxiliary function which merges those two halves.
In this way we make sure the merge helping function is only called when both halves have already been sorted.

The merge auxiliary function compares the values in both arrays and copies them from lowest to highest into the final array.
(I believe) this method requires more memory than the previous ones, as we need to create a temporary array to help us sort the other one.
Watch [this video on how to implement merge sort](https://www.youtube.com/watch?v=x_Z9FcAPmbk).

<br />

## π Sorting Linked Lists - with Merge Sort
Same principle as with arrays, but one needs to be more careful with pointers (and pointers to pointers). [Geeks for Geeks](https://www.geeksforgeeks.org/merge-sort-for-linked-list/) is a great resource.
