// Error review questions

/*
17- In C++, the indexing is from zero, so the first element has the index zero
    If there is a vector with six elements, it's index will range from 0 to 5,
    so the code v[v.size()] will be calling v[6], which does not exist because 
    the last element will have the index 5. It will be an out-of-range error.

18- An assertion is a statement that states an invariant. It is a check that 
    verifies an assumption your code makes is actually true at runtime. If it's
    false, the program immediately crashes with an error message.

19- Precondition is what must be true before a function runs, that is caller's responsibility.
    Postcondition is what must be true after a function runs, that is the function's responsibility.
    So a for loop can have 5 inputs taken for cin with all positive inetegers, precondition and then returns
    the output all of their sum which is post condition.

20- As per this book's knowledge so far, when precondition is already guaranteed by the type system.

21- When the return value is self-evidently correct, we don't need to check postcondition.

22- Get the program to compile -> Get the program to link. -> Get the program to do what it is supposed to do.

23- Lets the reader know what we have done here , helping them analyze where the next error could be or something like that

24- testing is done or is running the code on purpose to check if it works correctly.
    debugging is fixing the code after it is tested or run.

25- A random number is a number, in this context , which is drawn or returned by an algorithm that makes it seem random

26- We use random_int() to get a random number between two numbers, seed() function helps us a "random" number again and again

*/