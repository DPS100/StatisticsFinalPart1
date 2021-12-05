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

## Replication

### Running

#### Java
1. [Make sure java is installed](https://www.baeldung.com/java-check-is-installed)
2. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Builds](https://github.com/DPS100/StatisticsFinalPart1/tree/main/Builds) folder in the command line
3. Run `java -jar -Xmx256m BubbleSortJava.jar v` for verbose output, or `java -Xmx256m BubbleSortJava.jar` for no output.*

*Note: The `Xmx` flag ensures that the JVM will be created with a maximum memory size of 256 megabytes, same as C++*

#### C++
1. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Builds](https://github.com/DPS100/StatisticsFinalPart1/tree/main/Builds) folder in the command line
2. Run `BubbleSortC++.exe v` for verbose output, or `BubbleSortJava.exe` for no output.

### Compiling

#### Java
1. [Make sure java is installed](https://www.baeldung.com/java-check-is-installed)
2. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Project](https://github.com/DPS100/StatisticsFinalPart1) folder in the command line
3. Compile to .class file with `javac -d ./Builds BubbleSort.java`
4. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Builds](https://github.com/DPS100/StatisticsFinalPart1/tree/main/Builds) folder in the command line
5. Create .jar file with `jar cvfe BubbleSortJava.jar BubbleSort BubbleSort.class`

#### C++
1. [Make sure g++ is installed through MingW-w64](https://code.visualstudio.com/docs/cpp/config-mingw)
2. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Project](https://github.com/DPS100/StatisticsFinalPart1) folder in the command line
3. Compile with `g++ BubbleSort.cpp -o Builds/BubbleSortC++.exe -LD_FLAGS=-stack_size,0xF424000`*

*Note: The `stack_size` flag ensures that the linker will create an executable with a stack size of 256 megabytes, same as Java*

### Timer
Powershell's Measure Command cmdlet was used to measure the time for commands to execute.
1. [Navigate](https://www.howtogeek.com/659411/how-to-change-directories-in-command-prompt-on-windows-10/) to the [Builds](https://github.com/DPS100/StatisticsFinalPart1/tree/main/Builds) folder in the command line.
2. Switch to powershell by typing `powershell`
3. Run either the Java or C++ code, by using `Measure-Command{<Java/C++>}`, where `<Java/C++>` is replaced by their respecive run command.

## Potential Questions

> Why bubble sort?

Bubble sort is nowhere near the fastest sorting algorithm, so why use it? I chose bubble sort because the higher number of actions will allow a more accurate time measurement, and will exemplify the differences between the performance between two languages. The implementation is also quite simple, so I can create very similar versions in both languages.
> Why hardcode the shuffled list rather than parse a file?

While parsing a file is often the better choice, I want to compare just the sorting algorithm, and the different libraries may parse the files at different speeds. On that same idea, I used the Measure-Command cmdlet instead of language-dependant time libraries.
