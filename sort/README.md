# Sorting Algorithms

There are many well-known sorting algorithms, some easier than others, some faster than others.
I recommend this [sorting algorithms visualisation](https://www.youtube.com/watch?v=ZZuD6iUe3Pc) - I can't seem to get tired of it.
The ideal sorting algorithm will depend on the situation at hands, on your constraints and goal.
Watch [this introduction on some sorting algorithms and how they differ](https://www.youtube.com/watch?v=1sdEchFsL0Y).
You can find short explanations and resources to further understand how the following sorting algorithms work below.

## Bubble Sort
Probably the easiest sorting algorithm to code.
Iterate over the array and compare each element to the next.
If the element is bigger than the following one, swap them.
Go through the array as many times as you need until no more swaps are taking place, which means your array is sorted.

## Selection Sort
Iterate over the array.
For each position, scan the array from your position until the end and look for the lowest value.
Swap it with the one at your current location.
Move forward and repeat the process until you reach the end of the array.

## Insertion Sort
Iterate over the array and compare each element to the next.
If the element is bigger than the following one, swap them.
Then compare the swapped item to all the previous ones and keep on swapping it until it’s in the right position.

## Quick Sort
Start by watching [this video on the concept of the quick sort algorithm](https://www.youtube.com/watch?v=WaNLJf8xzC4).
How to translate this idea into code?
Start by picking a pivot, usually the first or last element of the array is chosen.
Let’s choose the last one.
Create a variable to keep track of the position where the pivot will be inserted later on (we’ll get there).
Iterate over the array and compare each element with the pivot.
If the element is smaller than the pivot, move it to the beginning of the array and advance our future pivot index.
Once we reach the end of the array, it will be organised in this way: first all the numbers smaller than the pivot, then all the numbers bigger or equal to the pivot and finally the pivot.
Our future pivot index will be pointing at the first number bigger than the pivot, so all we need to do now is to swap them.
Our array is looking nicer, but we still need to do the same with each of the blocks surrounding the pivot.
For that, we call the function recursively on each sub-array.
Watch [this video on how to code quick sort](https://www.youtube.com/watch?v=eqo2LxRADhU).

## Merge Sort
Merge Sort: https://www.youtube.com/watch?v=x_Z9FcAPmbk

