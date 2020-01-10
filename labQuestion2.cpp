Title: Lab Question 2
Name : Lauren Harrison
Discription : Consider an array of integers, to write a pseudocode for the choice of selection sort algorithm.
Date : 1/10/20

Selection Sort

START

    i : = 0
    
    // elements of the array
     array[0]: = 34   
     array[1]: = 4
     array[2]: = 14
     array[3]: = 28
     array[4]: = 86

    for i = 1 to n - 1  //setting the smallest integer to the first element
        smallest = i

        for j = i + 1 to n // locating which element is the smallest
            if array[j] < array[smallest], then  
                smallest = j
            endif
        endFor

            if smallestInteger != i // checking if the element is not equal to i's integer than it will be swapped
                swap array[smallest] and array[i], then //swapping the integers into i's position
            endif
     endFor

   STOP

                // the array I choose was 5 elememts so there would be 4 computional steps