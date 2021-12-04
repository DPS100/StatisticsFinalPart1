# Statistics Final: Part 1
## Description
This is part 1 of my AP Statistics final project.
## Requirements
You are to collect quantitative data that are from two different categories, but
measure the same variable. For example: male weight and female weight, SUV
mileage and car mileage, the top 20 National League homerun totals and the top 20
American League homerun totals, etc. Each set of data should have at least 20
values. You can look up data on the web (be sure to provide a citation) or you can
collect your own data (explain your method).
## Overview
I will be comparing the performance (time) between Java and C++ doing a sorting algorithm. I will be using the same data set, the numbers 1-1000 randomly shuffled by [Random.org's list randomizer](https://www.random.org/lists/), along with the same pseudocode for bubble sort transcribed into Java and C++. I will do 50 trials of each language and record the time taken for each.
## [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) pseudocode
Offset = index of first element<br>
Sorted index = size of list<br>
While(Sorted index != 1):<br>
&nbsp; If(First index + Offset > Second index + Offset):<br>
&nbsp;&nbsp; Swap(First index + Offset and Second index + Offset)<br>
&nbsp; Offset = Offset + 1<br>
&nbsp; If(Offset + 1 = Sorted index)<br>
&nbsp;&nbsp; Offset = 0<br>
&nbsp;&nbsp; Sorted = Sorted - 1<br>
## Why bubble sort?
Bubble sort is nowhere near the fastest sorting algorithm, so why use it? I chose bubble sort because the higher number of actions will allow a more accurate time measurement, and will exemplify the differences between the performance between two languages. The implementation is also quite simple, so I can create very similar versions in both languages.
