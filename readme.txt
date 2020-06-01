Problem: 
    
Li has planned a bike tour through the mountains of switzerland. His tour
consists of N checkpoints, numbered from 1 to N in the order he will visit
them. The i-th checkpoint has a height of H(i).

A checkpoint is the peak if:

* It is not the 1st checkpoint or the N-th checkpoint, and
* The height of the checkpoint is strictly greater than the checkpoint
  immediately before it and the checkpoint immediately after it.

This program will help Li find out the number of peaks.

Input:

The first line of the input gives the of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains  N integers. The i-th integer is H(i).

Output:

For each test case, output one line containing Case #x: y, where x is the test
case number (starting from 1) and y is the number of peaks in Li's bike tour.

Limits:

Time limit: 10 seconds per test set.
Memory limit: 1GB.
1 <= T <= 100
1 <= H(i) <= 100

Sample Example:

Input

4
3
10 20 14
4
7 7 7 7
5
10 90 20 90 10
3
10 3 10

Output:

Case #1: 1
Case #2: 0
Case #3: 2
Case #4: 0


