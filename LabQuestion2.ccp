Title: LabQuestion2
Name: Lauren Harrison      
Discription: Making an array of integers, to write a pseudocode for the choice of selection sort algorithm.
Date: 1/10/20

START

i: =0
int array[5]
 srand(static_cast<int> (time(0)))
for i = 0 to i < 5
     array[i] = rand( ) % 101
endFor

for i = 1 to n - 1
     smallest = i

     for j = i + 1 to n
         if array[j] < array[smallest] 
            smallest = j
          endIf
      endFor

	if smallestIndex != i 
              swap array[smallest] and array[i]
           endIf
endFor
 

STOP
