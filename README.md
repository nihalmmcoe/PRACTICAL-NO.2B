# PRACTICAL-NO.2B

#Insertion sort:
This is an in-place comparison based sorting algorithm. Here, a sub-list is maintained which is always sorted. For example, the lower part of an array is maintained to be sorted.
An element which is to be inserted in this sorted sub-list, has to find its appropriate place and insert it there. Hence the name insertion sort.
The array is searched sequentially and unsorted items are moved and inserted into a sorted sub-list (in the same array).
This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n are no. of items.

#Insertion Sort Algorithm (for cards):
Algorithm:
step1: Start
step2: Input n cards (can be numbers like 2, 5, 10 for simplicity)
step3: For each card i from 1 to n-1:
step4: Take the current card as key
step5: Compare it to cards before it in hand
step6: Shift larger cards one position to the right
step7: Insert key in the correct position
step8: Display the hand after each insertion
step9: End
